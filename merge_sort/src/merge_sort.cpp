#include "../headers/merge_sort.h"

using namespace std;

void Merge_sort::merge_sort(vector<int>& v) {
    merge_sort_worker(v, 0, v.size()-1);
}

void Merge_sort::merge_sort_worker(vector<int>& v, unsigned int l, unsigned int r) {
    if (l < r) {
        unsigned int m = l + (r - l) / 2;
        merge_sort_worker(v, l, m);
        merge_sort_worker(v, m + 1, r);
        merge(v, l, r, m);
    }
}

void Merge_sort::merge(vector<int>& v, unsigned int l, unsigned int r, unsigned int m) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> v1, v2;
    v1.reserve(n1);
    v2.reserve(n2);

    for (i = 0; i < n1; i++) {
        v1.push_back(v[l + i]);
    }
    for (j = 0; j < n2; j++) {
        v2.push_back(v[m + 1 + j]);
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (v1[i] <= v2[j]) {
            v[k] = v1[i++];
        } else {
            v[k] = v2[j++];
        }
        k++;
    }

    while (i < n1) {
        v[k++] = v1[i++];
    }

    while (j < n2) {
        v[k++] = v2[j++];
    }
}
