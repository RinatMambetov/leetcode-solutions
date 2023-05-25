#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int maximizeSum(vector<int>& nums, int k) {
    int const maxElemenent = *max_element(nums.begin(), nums.end());
    int result = 0;
    for (int i = 0; i < k; i++) {
      result += maxElemenent + i;
    }
    return result;
  }
};

// gptver
// class Solution {
//  public:
//   int maximizeSum(vector<int>& nums, int k) {
//     int maxElement = *max_element(nums.begin(), nums.end());
//     return (maxElement * k) + (k * (k - 1) / 2) * (maxElement > 0 ? 1 : -1);
//   }
// };

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {5, 5, 5};
  Solution s = Solution();
  cout << s.maximizeSum(v1, 3) << '\n';  // 18
  cout << s.maximizeSum(v2, 2) << '\n';  // 11
}
