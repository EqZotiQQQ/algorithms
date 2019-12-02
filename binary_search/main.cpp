#include <iostream>
#include "binary_search.h"

using namespace std;

int main()
{
    vector<int> vec {0,1,2,3,4,5,6,7,8,9};
    cout << Binary_search::binary_search(vec, 0) << endl;
    return 0;
}
