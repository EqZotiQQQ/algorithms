#include <iostream>
#include "headers/merge_sort.h""

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector<int> vec {5,3,1,6,6,1,3,5,77,12,8,1};
    Merge_sort::merge_sort(vec);
    for(auto n:vec) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
