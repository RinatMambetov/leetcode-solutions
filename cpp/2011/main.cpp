#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int finalValueAfterOperations(vector<string>& operations) {
    int res(0);

    for (auto&& i : operations) {
      if (i.compare("++X") == 0 || i.compare("X++") == 0) ++res;
      if (i.compare("--X") == 0 || i.compare("X--") == 0) --res;
    }

    return (res);
  }
};

int main() {
  Solution s = Solution();
  vector<string> in = {"--X", "X++", "X++"};
  int out = s.finalValueAfterOperations(in);
  cout << out << '\n';
}
