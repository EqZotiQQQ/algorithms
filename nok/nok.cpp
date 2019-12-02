#include "nok.h"
#include "nod.h"

#include <iostream>

using namespace std;

unsigned long long Nok::calc_nok(vector<int> vec) {
    unsigned long long nok = 1;
    vector<vector<int>> result;
    result.reserve(vec.size());
    for (auto i{ vec.begin() }; i != vec.end(); i++) {
        result.push_back(Nod::div_to_prime(*i));
    }
    vector<int>pre_res = result[0];
    for (int i = 1; i < result.size(); i++) {
        if (mult_of_vec(pre_res) > mult_of_vec(result[i])) {
            pre_res = find_diff_elems_in_vec(pre_res, result[i]);
        } else { 
            pre_res = find_diff_elems_in_vec(result[i], pre_res);
        }
    }

    for (auto n : pre_res) {
        nok *= n;
    }
    return nok;
}

vector<int> Nok::find_diff_elems_in_vec(vector<int>& arr_a, vector<int>& arr_b) {
    vector<int> result;
    result.reserve(arr_a.size() + arr_a.size());
    for (int a = 0, b = 0; b < arr_b.size() && a < arr_a.size();) {
        if (arr_a[a] == arr_b[b]) {
            result.push_back(arr_a[a]);
            a++, b++;
        } else if (arr_a[a] > arr_b[b]) {
            result.push_back(arr_b[b]);
            b++;
            if (b >= arr_b.size()) {
                for (int i{ a }; a < arr_a.size(); a++) {
                    result.push_back(arr_a[a]);
                }
            }
        } else {
            result.push_back(arr_a[a]);
            a++;
            if (a >= arr_a.size()) {
                for (int i{ b }; b < arr_b.size(); b++) {
                    result.push_back(arr_b[b]);
                }
            }
        }
    }
    return result;
}

unsigned long long Nok::mult_of_vec(std::vector<int> vec) {
    unsigned long long sum = 1;
    for (int j = 0; j < vec.size(); j++) {
        sum *= vec.at(j);
    }
    return sum;
}