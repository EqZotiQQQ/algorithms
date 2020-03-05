#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        if (a.length() == 0) return b;
        if (b.length() == 0) return a;
        string res_str;
        bool prev_value = false;
        reverse(a);
        reverse(b);
        int length_diff = a.length() - b.length();
        if (a.length() < b.length()) {
            a.swap(b);
        }
        cout << "res_str.length = " << res_str.length() << endl;
        res_str.resize(a.size() + 1);
        for (int i = 0; i < b.size(); i++) {
            cout << "i: " << i << "res_str = " << res_str << endl;
            if (a[i] == '1' && b[i] == '1') {
                if (prev_value) {
                    res_str[i] = '1';
                    prev_value = true;
                } else {
                    res_str[i] = '0';
                    prev_value = true;
                }
            }
            else if (a[i] == '1' || b[i] == '1') {
                if (prev_value) {
                    res_str[i] = '0';
                    prev_value = true;
                } else {
                    res_str[i] = '1';
                }
            } else {
                if (prev_value) {
                    res_str[i] = '1';
                    prev_value = false;
                } else {
                    res_str[i] = '0';
                }
            }

            cout << "res_str.length = " << res_str.length() << endl;
        }
        for (int i = b.size(); i < a.size() + 1; i++) {
            cout << "i: " << i << "res_str = " << res_str << endl;
            if (a[i] == '1') {
                if (prev_value) {
                    res_str[i] = '0';
                } else {
                    res_str[i] = '1';
                }
            } else {
                if (prev_value) {
                    res_str[i] = '1';
                    prev_value = false;
                } else {
                    if (i == a.size()) {
                        break;
                    }
                    res_str[i] = '0';
                }
            }
        }
        reverse(res_str);
        cout << "std: " << res_str << endl;
        return res_str;
    }
    void reverse(string& str) {
        if (str.length() == 1) return;
        for (int i = 0; i < str.length()/2; i++) {
            char temp = str[i];
            str[i] = str[str.length() - 1 - i];
            str[str.length() - i - 1] = temp;
        }
    }
};


int main() {
    Solution s;
    string s1 = "0", s2 = "0";
    string res = s.addBinary(s1,s2);
    cout <<"x " <<  (int)res[0] << endl;
    int x;
    cin >> x;
    return 0;
}