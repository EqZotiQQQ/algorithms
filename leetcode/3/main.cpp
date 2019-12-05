#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        set<char> se;
        int len = 0;
        int max_len = 0;
        for (auto iter = s.begin(); iter != s.end(); iter++) {
            if (se.find(*iter) == se.end()) {
                se.insert(*iter);
                len++;
            } else {
                se.clear();
                len = 0;
                for (auto iter2 = iter - 1; *iter2 != *iter; iter2--) {
                    se.insert(*iter2);
                    len++;
                }
                se.insert(*iter);
                len++;
            }
            if (len > max_len) {
                max_len = len;
            }
        }
        return max_len;
    }
};

int main() {
    cout << Solution::lengthOfLongestSubstring("dvdf") << endl;
    return 0;
}