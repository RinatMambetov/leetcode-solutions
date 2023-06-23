#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

template <typename T>
void printVec(const std::vector<T>& vec) {
  for (auto& elem : vec) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

void removeDuplicates(vector<int>& seats, vector<int>& students) {
  for (vector<int>::iterator itseat = seats.begin(); itseat != seats.end();
       itseat++) {
    for (vector<int>::iterator itstud = students.begin();
         itstud != students.end(); itstud++) {
      if (*itseat == *itstud) {
        itseat = seats.erase(itseat);
        itstud = students.erase(itstud);
        break;
      }
    }
  }
}

class Solution {
 public:
  int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    removeDuplicates(seats, students);
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    size_t result = 0;
    for (size_t i = 0; i < seats.size(); i++) {
      result += abs(students[i] - seats[i]);
    }
    return result;
  }
};

int main() {
  vector<int> v1 = {3, 1, 5};
  vector<int> v2 = {2, 7, 4};
  Solution s = Solution();
  cout << s.minMovesToSeat(v1, v2) << '\n';  // 4
  v1 = {4, 1, 5, 9};
  v2 = {1, 3, 2, 6};
  cout << s.minMovesToSeat(v1, v2) << '\n';  // 7
  v1 = {2, 2, 6, 6};
  v2 = {1, 3, 2, 6};
  cout << s.minMovesToSeat(v1, v2) << '\n';  // 4
}
