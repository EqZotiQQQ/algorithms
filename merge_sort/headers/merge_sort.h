#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

class Merge_sort {
public:
    static std::vector<int> merge_sort(std::vector<int>& v);
private:
    static std::vector<int> merge(std::vector<int>&v);
};

#endif // MERGE_SORT_H
