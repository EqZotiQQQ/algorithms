#include "../headers/merge_sort.h"

using namespace std;

void Merge_sort::merge_sort(vector<int>& v) {
    merge_sort_worker(v, 0, v.size());
}

void Merge_sort::merge_sort_worker(vector<int>& v, unsigned int l, unsigned int r) {
    if (l < r) {
        unsigned int m = l + (r - l) / 2;
        merge_sort_worker(v, l, m);
        merge_sort_worker(v, m + 1, r);
        merge(v, l, r, m);
    }
}

void Merge_sort::merge(vector<int>&v, int l, int r, int m) {

}
