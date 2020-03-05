#include <iostream>
#include <string>

using namespace std;

class Solution {
   const string I = "I"; //1
   const string V = "V"; //5
   const string X = "X"; //10
   const string L = "L"; //50
   const string C = "C"; //100
   const string D = "D"; //500
   const string M = "M"; //1000
public:
    string intToRoman(int num) {
        string res = "";
        while (num - 1000 >= 0) {
            res.append(M);
            num -= 1000;
            if (res.size() > 2) {
                //4000 = IV M
            }
        }
        while (num - 500 >= 0) {
            res.append(D);
            num -= 500;
        }
        while (num - 100 >= 0) {
            res.append(C);
            num -= 100;
        }
        while (num - 50 >= 0) {
            res.append(L);
            num -= 50;
        }
        while (num - 10 >= 0) {
            res.append(X);
            num -= 10;
        }
        while (num - 5 >= 0) {
            res.append(V);
            num -= 5;
        }
        while (num - 1 >= 0) {
            res.append(I);
            num -= 1;
        }
        return res;
    }
};

int main() {
    Solution sol;
    string res = sol.intToRoman(54);
    cout << res << endl;
    return 0;
}