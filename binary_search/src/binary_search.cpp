#include "binary_search.h"

bool Binary_search::is_sorted([[maybe_unused]]std::vector<int> v) {
    return true;
}

int Binary_search::binary_search(std::vector<int> v, int value) {
    if(!is_sorted(v)){
        return -2;
    }
    if(v.size() == 0) {
        return -3;
    }
    unsigned int l = 0, r = v.size();
    while(l <= r) {
        unsigned int m = l + (r - l)/2;
        if(v.at(m) == value) {
            return static_cast<int>(m);
        } else if (v.at(m) > value) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}
