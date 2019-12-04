#include "../headers/merge_sort.h"

using namespace std;

vector<int> Merge_sort::merge_sort(vector<int>& v) {
    merge_sort_worker(v, 0, v.size());
}

void Merge_sort::merge_sort_worker(vector<int>& v, unsigned int l, unsigned int r) {
    unsigned int m = (r - l)/2;
    if(r > l) {
        //vector<int> left(v.begin(), v.begin() + static_cast<int>(m));
        merge_sort_worker(v, l, m);
        //vector<int> right(v.begin() + static_cast<int>(m), v.end());
        merge_sort_worker(v, m + 1, r);
        merge(v, l, r, m);
    }
}

vector<int> Merge_sort::merge(std::vector<int>& v, unsigned int l, unsigned int r, unsigned int m) {
    vector<int> temp;
    temp.resize(v.size()+1);
    unsigned int i = l;
    unsigned int j = m+1;
    unsigned int k = 0;

    while(i <= m && j <= r) {
        if(v[i] < v[j]) {
            temp.push_back(v[i++]);
        } else {
            temp.push_back(v[j++]);
        }
        k++;
    }
    while(i <= m) {
        temp.push_back(v[i++]);
        k++;
    }
    while(j <= r) {
        temp.push_back(v[j++]);
        k++;
    }
    k--;
    while(k >=0) {
        v[k+l] = temp[k];
        k--;
    }
}
