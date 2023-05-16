#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int sumOddLengthSubarrays(vector<int>& arr) {
    size_t size = arr.size();
    size_t sum(0);
    for (size_t i = 0; i < size; i++) {
      size_t diff = size - i;
      for (size_t j = 0; j < diff; j += 2) {
        vector<int> v(arr.begin() + i, arr.begin() + i + j + 1);
        sum += accumulate(v.begin(), v.end(), 0);
      }
    }
    return sum;
  }
};

int main() {
  vector<int> v1 = {1, 4, 2, 5, 3};
  vector<int> v2 = {1, 2};
  vector<int> v3 = {10, 11, 12};
  Solution s = Solution();
  cout << s.sumOddLengthSubarrays(v1) << '\n';  // 58
  cout << s.sumOddLengthSubarrays(v2) << '\n';  // 3
  cout << s.sumOddLengthSubarrays(v3) << '\n';  // 66
}
