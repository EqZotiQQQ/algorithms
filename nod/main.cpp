#include <iostream>


#include "fibonacci.h"
#include "nod.h"
#include "nok.h"

using namespace std;

int main() {
    int num = 10, div = 2;
    std::vector<unsigned long long> s{
        679891637638612258,
        1100087778366101931,
    };
    cout << "nod: " << Nod::calc_nod(s) << endl;
    return 0;
}