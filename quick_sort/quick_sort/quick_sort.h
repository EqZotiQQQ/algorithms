#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>

class QuickSort {
public:
    static void quickSort(std::vector<int>& v);
    static void quickSortWorker(std::vector<int>& v, int l, int r);
private:
    static int piv(std::vector<int>& v, int l, int r);
    inline static void swap(int& a, int& b);
};

#endif //QUICK_SORT_H