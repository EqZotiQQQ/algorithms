#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

class Merge_sort {
public:
    static void merge_sort(std::vector<int>& v);
private:
    static void merge(std::vector<int>&v, int l, int r, int m);
    static void merge_sort_worker(std::vector<int>& v, unsigned int l, unsigned int r);
};

#endif // MERGE_SORT_H
