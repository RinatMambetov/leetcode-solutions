#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int countKDifference(vector<int>& nums, int k) {
    size_t counter = 0;
    for (size_t i = 0; i < nums.size(); i++) {
      for (size_t j = i + 1; j < nums.size(); j++) {
        if (abs(nums[j] - nums[i]) == k) counter++;
      }
    }
    return counter;
  }
};

int main() {
  vector<int> v1 = {1, 2, 2, 1};
  vector<int> v2 = {1, 3};
  vector<int> v3 = {3, 2, 1, 5, 4};
  Solution s = Solution();
  cout << s.countKDifference(v1, 1) << '\n';  // 4
  cout << s.countKDifference(v2, 3) << '\n';  // 0
  cout << s.countKDifference(v3, 2) << '\n';  // 3
}
