#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

// ver1
//  int get_sum_ltr_diagonal(vector<vector<int>>& mat) {
//    size_t len = mat.size();
//    int sum = 0;
//    for (size_t i = 0; i < len; i++) {
//      sum += mat[i][i];
//    }
//    return sum;
//  }

// int get_sum_rtl_diagonal(vector<vector<int>>& mat) {
//   size_t len = mat.size();
//   int sum = 0;
//   for (size_t i = 0; i < len; i++) {
//     sum += mat[i][len - 1 - i];
//   }
//   return sum;
// }

// class Solution {
//  public:
//   int diagonalSum(vector<vector<int>>& mat) {
//     size_t len = mat.size();
//     int sum = get_sum_ltr_diagonal(mat) + get_sum_rtl_diagonal(mat);
//     if (len % 2 != 0) {
//       return sum - mat[len / 2][len / 2];
//     }
//     return sum;
//   }
// };

// ver2
int get_diagonals_sum(vector<vector<int>>& mat) {
  size_t len = mat.size();
  int sum = 0;
  for (size_t i = 0; i < len; i++) {
    sum += mat[i][i];
    sum += mat[i][len - 1 - i];
  }
  return sum;
}

class Solution {
 public:
  int diagonalSum(vector<vector<int>>& mat) {
    size_t len = mat.size();
    int sum = get_diagonals_sum(mat);
    if (len % 2 != 0) {
      return sum - mat[len / 2][len / 2];
    }
    return sum;
  }
};

int main() {
  vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> v2 = {
      {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};

  Solution s = Solution();
  cout << s.diagonalSum(v1) << '\n';  // 25
  cout << s.diagonalSum(v2) << '\n';  // 8
}
