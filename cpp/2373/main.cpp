#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void printVec(const std::vector<T> &vec) {
  for (auto &elem : vec) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

template <typename T>
void print2DVec(const std::vector<std::vector<T>> &vec) {
  for (auto &innerVec : vec) {
    printVec(innerVec);
  }
}

// int getMaxOfV(vector<vector<int>> &v) {
//   int max(0);
//   for (auto &&line : v) {
//     for (auto &&elem : line) {
//       if (elem > max) max = elem;
//     }
//   }
//   return max;
// }

int getMaxOfV(const vector<vector<int>> &v) {
  int max_value = INT_MIN;  // start with the lowest possible value
  for (const auto &row : v) {
    for (const int &element : row) {
      max_value = max(max_value, element);  // use std::max to simplify the code
    }
  }
  return max_value;
}

// class Solution {
//  public:
//   vector<vector<int>> largestLocal(vector<vector<int>> &grid) {
//     size_t size = grid.size();
//     vector<vector<int>> result = {};

//     for (size_t startRow = 0; startRow <= size - 3; startRow++) {
//       vector<int> tempV = {};
//       for (size_t startCol = 0; startCol <= size - 3; startCol++) {
//         vector<vector<int>> largeV = {};
//         for (size_t row = startRow; row < startRow + 3; row++) {
//           vector<int> smallV(grid[row].begin() + startCol,
//                              grid[row].begin() + startCol + 3);
//           largeV.push_back(smallV);
//         }
//         tempV.push_back(getMaxOfV(largeV));
//       }
//       result.push_back(tempV);
//     }

//     return result;
//   }
// };

// gptver
class Solution {
 public:
  vector<vector<int>> largestLocal(vector<vector<int>> &grid) {
    vector<vector<int>> result;
    const int ROW_SIZE = grid.size();
    const int COL_SIZE = grid[0].size();

    for (int row = 0; row < ROW_SIZE - 2; row++) {
      vector<int> tempRow;
      for (int col = 0; col < COL_SIZE - 2; col++) {
        vector<int> subGridValues;
        for (int i = row; i < row + 3; i++) {
          for (int j = col; j < col + 3; j++) {
            subGridValues.push_back(grid[i][j]);
          }
        }
        tempRow.push_back(
            *max_element(subGridValues.begin(), subGridValues.end()));
      }
      result.push_back(tempRow);
    }

    return result;
  }
};

int main() {
  vector<vector<int>> v1 = {
      {9, 9, 8, 1}, {5, 6, 2, 6}, {8, 2, 6, 4}, {6, 2, 2, 2}};
  vector<vector<int>> v2 = {{1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1},
                            {1, 1, 2, 1, 1},
                            {1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1}};
  Solution s = Solution();
  //[[9,9],[8,6]]
  print2DVec(s.largestLocal(v1));
  //[[2,2,2],[2,2,2],[2,2,2]]
  print2DVec(s.largestLocal(v2));
}
