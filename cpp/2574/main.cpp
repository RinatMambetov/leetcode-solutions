#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

template <class T>
void printv(std::vector<T> v) {
  for (auto const& i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

class Solution {
 public:
  vector<int> leftRigthDifference(vector<int>& nums) {
    vector<int> res;

    for (std::vector<int>::iterator iterator = nums.begin();
         iterator != nums.end(); ++iterator) {
      if (iterator == nums.begin())
        res.push_back(accumulate(nums.begin() + 1, nums.end(), 0));
      else if (iterator == nums.end() - 1)
        res.push_back(accumulate(nums.begin(), nums.end() - 1, 0));
      else {
        res.push_back(abs(accumulate(nums.begin(), iterator, 0) -
                          accumulate(iterator + 1, nums.end(), 0)));
      }
    }

    return (res);
  }
};

int main() {
  Solution s = Solution();
  vector<int> in = {10, 4, 8, 3};
  vector<int> out = s.leftRigthDifference(in);
  printv(out);  // 15,1,11,22
}
