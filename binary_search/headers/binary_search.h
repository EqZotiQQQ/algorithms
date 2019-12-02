#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <vector>

class Binary_search
{
private:
    static bool is_sorted(std::vector<int> v);
public:
    Binary_search() = delete;
    static int binary_search(std::vector<int> v, int value);
};

#endif // BINARY_SEARCH_H
