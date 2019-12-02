#include "merge_sort.h"

using namespace std;

vector<int> Merge_sort::merge_sort(vector<int>& v) {
    return merge_sort_worker(v, 0, v.size());
}

vector<int> Merge_sort::merge_sort_worker(vector<int>& v, unsigned int l, unsigned int r) {
    unsigned int m = l + (r - l)/2;
    vector<int> left(v.begin(), v.begin() + static_cast<int>(m));
    merge_sort_worker(left, l, m);
    vector<int> right(v.begin() + static_cast<int>(m), v.end());
    merge_sort_worker(right, m + 1, r);
    merge();
    return v;
}

vector<int> Merge_sort::merge(vector<int>&v, int l, int r, int m) {

}
