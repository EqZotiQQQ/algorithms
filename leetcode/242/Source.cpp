#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return 0;
        multiset<char> ms, mt;
        for (auto i = s.begin(), j = t.begin(); i != s.end(); i++, j++) {
            ms.insert(*i);
            mt.insert(*i);
        }
        return ms == mt;
    }
};

int main() {
    Solution s;
    cout << s.isAnagram("ssss", "ssss") << endl;
    int x;
    cin >> x;
    return 0;
}