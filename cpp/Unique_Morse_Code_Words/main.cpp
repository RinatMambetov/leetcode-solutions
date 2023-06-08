#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   int uniqueMorseRepresentations(vector<string>& words) {
//     vector<string> code = {
//         ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
//         ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
//         "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
//     string alphabet = "abcdefghijklmnopqrstuvwxyz";
//     map<string, int> m;
//     string tempStr = "";
//     size_t counter = 0;
//     for (string const& word : words) {
//       for (auto const& letter : word) {
//         size_t index = alphabet.find(letter);
//         tempStr += code[index];
//       }
//       m.insert(pair<string, int>(tempStr, counter));
//       tempStr.clear();
//       counter++;
//     }
//     return m.size();
//   }
// };

// gptver
class Solution {
 public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> code = {
        ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> unique_codes;
    for (string const& word : words) {
      string tempStr = "";
      for (auto const& letter : word) {
        size_t index = letter - 'a';
        tempStr += code[index];
      }
      unique_codes.insert(tempStr);
    }
    return unique_codes.size();
  }
};

int main() {
  vector<string> v1 = {"gin", "zen", "gig", "msg"};
  vector<string> v2 = {"a"};
  Solution s = Solution();
  cout << s.uniqueMorseRepresentations(v1) << '\n';  // 2
  cout << s.uniqueMorseRepresentations(v2) << '\n';  // 1
}
