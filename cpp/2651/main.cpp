#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
  }
};

int main() {
  // vector<int> v1 = {3, 1, 5};
  // vector<int> v2 = {2, 7, 4};
  Solution s = Solution();
  cout << s.findDelayedArrivalTime(15, 5) << '\n';   // 20
  cout << s.findDelayedArrivalTime(13, 11) << '\n';  // 0
}
