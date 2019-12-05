#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = merge(nums1, nums2);
        for (auto i : res) {
            cout << i << " ";
        }
        double med = 0;
        cout << endl;
        int mid = res.size() / 2;
        if (res.size() % 2 == 0) {
            med = (res[mid] + res[mid - 1]) * 0.5;
            cout << med << endl;
        } else {
            med = res[res.size() * 0.5];
            cout << med << endl;
        }
        return med;
    }
    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int size = nums1.size() + nums2.size();
        res.reserve(size);
        for (auto l = 0, r = 0, n = 0; n < size; n++) {
            if (l < nums1.size() && r < nums2.size()) {
                if (nums1[l] > nums2[r]) {
                    res.push_back(nums2[r++]);
                } else if (nums1[l] < nums2[r]) {
                    res.push_back(nums1[l++]);
                } else {
                    res.push_back(nums1[l++]);
                }
            } else if (l < nums1.size()) {
                res.push_back(nums1[l++]);
            } else {
                res.push_back(nums2[r++]);
            }
        }
        return res;
    }
};

int main() {
    vector<int> v1 = { 1, 3 };
    vector<int> v2 = { 2 };
    Solution sol;
    sol.findMedianSortedArrays(v1, v2);
    return 0;
}