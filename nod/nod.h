#ifndef NOD_H
#define NOD_H

#include <vector>
#include <set>

using namespace std;

class Nod {
public:
    static long calc_nod(std::vector<unsigned long long> vect);
    static std::vector<int> div_to_prime(unsigned long long val);
private:
    static vector<int> find_same_elems_in_vec(vector<int>& a, vector<int>& b);
};

#endif //NOD_H