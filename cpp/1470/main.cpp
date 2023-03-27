#include <iostream>
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
  vector<int> shuffle(vector<int>& nums, int n) {
    size_t even(1);
    size_t odd(0);
    vector<int> out(nums.size(), 0);

    for (size_t i = 0; i < nums.size(); i++) {
      if (static_cast<int>(i) < n) {
        out[odd] = nums[i];
        odd += 2;
      } else {
        out[even] = nums[i];
        even += 2;
      }
    }

    return (out);
  }
};

int main() {
  Solution s = Solution();
  vector<int> in = {2, 5, 1, 3, 4, 7};
  vector<int> out = s.shuffle(in, 3);
  printv(out);  // [2,3,5,4,1,7]
}
