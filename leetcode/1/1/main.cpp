#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& v, int target) {
#if 0
        //stupid prob, works if vec is sorted
        for (auto i = 0; i < v.size() - 1; i++) {
            if ((v[i] + v[i + 1]) == target) {
                vector<int> res_vec{ i, i + 1 };
                return res_vec;
            }
        }
        vector<int> res_vec{ 0, 0 };
        return res_vec;
#endif
        //it will work in O(n^2), prob it might be sorted and be O(n*logn)
        for (auto i = 0; i < v.size(); i++) {
            for (auto j = i + 1; j < v.size(); j++) {
                if (v[i] + v[j] == target) {

                    vector<int> res_vec{ i, j };
                    return res_vec;
                }
            }
        }
        vector<int> res_vec{ 0, 0 };
        return res_vec;
    }
};

int main() {
    vector<int> vec{ 2, 16, 110, 10, 211 };
    vector<int> v = Solution::twoSum(vec, 26);
    for (auto n : v) {
        cout << n << endl;
    }
}