#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        char** matrix = new char*[n];
        for (int i = 0; i < n; i++) {
            matrix[i] = new char[n];
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = '.';
                cout << matrix[i][j];
            }
            cout << endl;
        }
        return {};
    }
};
int main() {
    Solution s;
    s.solveNQueens(5);
    int x;
    cin >> x;
    return 0;
}