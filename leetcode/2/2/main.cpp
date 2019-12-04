#include <list>
#include <iostream>

using namespace std; 

class Solution {
public:
    static list<int> addTwoNumbers(list<int>& l1, list<int>& l2) {
        int k = l1.size() - 1;
        int dig = 0;
        int first_value = 0;
        int second_value = 0;
        list<int> ret;
        for (auto i = l1.rbegin(); i != l1.rend(); i++, k--) {
            dig = *i;
            for (int j = k; j > 0; j--) {
                dig *= 10;
            }
            first_value += dig;
        }
        k = l2.size() - 1;
        for (auto i = l2.rbegin(); i != l2.rend(); i++, k--) {
            dig = *i;
            for (int j = k; j > 0; j--) {
                dig *= 10;
            }
            second_value += dig;
        }
        int result = first_value + second_value;

        while (result != 0) {
            ret.push_front(result % 10);
            result /= 10;
        }

        return ret;
    }
};

int main() {
    list<int> lst1{ 3, 4, 2 };
    list<int> lst2{ 4, 6, 5 };
    Solution::addTwoNumbers(lst1, lst2);
    return 0;
}