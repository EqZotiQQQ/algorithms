#include <iostream>
#include "quick_sort.h"

using namespace std;

int main() {
    vector<int> vec{ 1,4,6,1,3,5,199,3,2,15,0 };
    for (auto n : vec) {
        cout << n << " ";
    }
    cout << endl;
    QuickSort::quickSort(vec);
    for (auto n : vec) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
