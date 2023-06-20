#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   int largestAltitude(vector<int>& gain) {
//     int res = 0;
//     int l = 0;
//     for (auto& i : gain) {
//       l += i;
//       if (l > res) res = l;
//     }
//     return res;
//   }
// };

// gptver
class Solution {
 public:
  int largestAltitude(vector<int>& gain) {
    int res = 0, l = 0;
    for (auto i : gain) res = max(res, l += i);
    return res;
  }
};

int main() {
  vector<int> v1 = {-5, 1, 5, 0, -7};
  vector<int> v2 = {-4, -3, -2, -1, 4, 3, 2};
  Solution s = Solution();
  cout << s.largestAltitude(v1) << '\n';  // 1
  cout << s.largestAltitude(v2) << '\n';  // 0
}
