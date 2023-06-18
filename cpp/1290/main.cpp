#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
 public:
  int getDecimalValue(ListNode* head) {
    string s = "";
    while (head != nullptr) {
      s += to_string(head->val);
      head = head->next;
    }
    // cout<<s<<'\n';
    int res = 0;
    int p = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == '1') {
        res += pow(2, p);
      }
      p++;
    }
    return res;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  // cout << s.maxDepth("(1+(2*3)+((8)/4))+1") << '\n';  // 3
  // cout << s.maxDepth("(1)+((2))+(((3)))") << '\n';    // 3
}
