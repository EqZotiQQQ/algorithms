
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vvs;
        multimap<multiset<char>, vector<string>> msv;
        for (string str : strs) {
            multiset<char> s;
            for (char ch : str) {
                s.insert(ch);
            }

            auto key = msv.find(s);
            if (key == msv.end()) {
                vector<string> vs = { str };
                msv.insert({ s, vs });
            }
            else {
                key->second.push_back(str);
            }
        }
        for (auto i : msv) {
            vector<string> pV = i.second;
            vvs.push_back(i.second);
        }
        return vvs;
    }
};


int main() {
    vector<string> anagrams{"hos", "boo", "nay", "deb", "wow", "bop", "bob", "brr", "hey", "rye", "eve", "elf", "pup", "bum", "iva", "lyx", "yap", "ugh", "hem", "rod", "aha", "nam", "gap", "yea", "doc", "pen", "job", "dis", "max", "oho", "jed", "lye", "ram", "pup", "qua", "ugh", "mir", "nap", "deb", "hog", "let", "gym", "bye", "lon", "aft", "eel", "sol", "jab"
};
    Solution sol;
    vector<vector<string>> r = sol.groupAnagrams(anagrams);
    for (auto i : r) {
        for (auto c : i) {
            cout << c << " ";
        }
        cout << endl;
    }
    int x;
    cin >> x;
}