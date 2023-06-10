#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   string mergeAlternately(string word1, string word2) {
//     string result;
//     size_t i = 0;
//     if (word1.size() > word2.size()) {
//       for (; i < word2.size(); i++) {
//         result += word1[i];
//         result += word2[i];
//       }
//       result += word1.substr(i);
//     } else {
//       for (; i < word1.size(); i++) {
//         result += word1[i];
//         result += word2[i];
//       }
//       result += word2.substr(i);
//     }
//     return result;
//   }
// };

// gptver
class Solution {
 public:
  string mergeAlternately(string word1, string word2) {
    string result;
    size_t i = 0;  // Use int instead of size_t
    size_t j = 0;  // Initialize new variable for second string
    while (i < word1.size() && j < word2.size()) {
      result += word1[i++];
      result += word2[j++];
    }
    // Append the rest of the longer string
    if (i < word1.size()) {
      result += word1.substr(i);
    } else if (j < word2.size()) {
      result += word2.substr(j);
    }
    return result;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.mergeAlternately("abc", "pqr") << '\n';  // apbqcr
  cout << s.mergeAlternately("ab", "pqrs") << '\n';  // apbqrs
  cout << s.mergeAlternately("abcd", "pq") << '\n';  // apbqcd
}
