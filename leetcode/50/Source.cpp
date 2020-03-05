#include <iostream>
using namespace std;
class Solution {
public:
   /* double myPow(double x, int n) {
        double result = 1;
        if (n == 0) return 1;
        if (n == 1) return x;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return result;
    }*/
    double myPow(double x, int n) {
        bool m = n < 0 ? true : false;
        long long s = n;
        if (m) s = -s;
        double res = 1;
        while (s) {
            if (s & 1) {
                res *= x;
                --s;
            } else {
                x *= x;
                s >>= 1;
            }
        }
        if (m) return 1 / res;
        return res;
    }

};

int main() {

    Solution s;
    cout << s.myPow(2, -4) << endl;
    int x;
    cin >> x;
    return 0;
}