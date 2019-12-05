#include "quick_sort.h"

using namespace std;

void QuickSort::quickSort(vector<int>& v) {
    quickSortWorker(v, 0, v.size() - 1);
}

void QuickSort::quickSortWorker(vector<int>& v, int l, int r) {
    if (l < r) {
        int pivot = piv(v, l, r);
        quickSortWorker(v, l, pivot - 1);
        quickSortWorker(v, pivot + 1, r);
    }
}

int QuickSort::piv(std::vector<int>& v, int l, int r) {
    int pivot = v[r];
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++) {
        if (v[j] < pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[r]);
    return (i + 1);
}

void QuickSort::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

