#ifndef NOK_H
#define NOK_H

#include <vector>

class Nok {
public:
    static unsigned long long calc_nok(std::vector<int> vec);
    static unsigned long long mult_of_vec(std::vector<int> vec);
private:
    static std::vector<int> find_diff_elems_in_vec(std::vector<int>& a, std::vector<int>& b);
};
#endif // !NOK_H

