#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int num = 0;
        char xc = needle[0];
        for (char c : haystack) {
            if (c++ == needle[xc++]) {

            }
            num++;
        }
    }
};

int main() {

}