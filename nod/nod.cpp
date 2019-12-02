#include "nod.h"

#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

long Nod::calc_nod(std::vector<unsigned long long> vect) {
    long nod = 1;
    std::vector<std::vector<int>> result;
    for (auto i{ vect.begin() }; i != vect.end(); i++) {
        result.push_back(div_to_prime(*i));
    }
        
    vector<int> pre_res = result[0];
    for (int i = 1; i < result.size(); i++) {
        pre_res = find_same_elems_in_vec(pre_res, result[i]);
    }

    for (auto n : pre_res) {
        nod *= n;
    }
    return nod;
}

vector<int> Nod::find_same_elems_in_vec(vector<int>& a, vector<int>& b) {
    vector<int> res;
    if (a.size() == 0 || b.size() == 0) {
        vector<int> x{ 0 };
        return x;
    } 
    res.reserve(a.size());
    for (int i = 0, j = 0, k = 0; i < a.size();) {
        if (a.at(i) == b.at(j)) {
            res.push_back(a.at(i));
            i++, j++, k++;
        } else if (a.at(i) > b.at(j)) {
            if (j >= b.size()) {
                res.at(i) = 0;
            }
            j++;
            if (j == b.size()) {
                break;
            }
        } else {
            i++;
        }
    }
    res.resize(res.size());
    if (res.size() == 0) {
        res.push_back(1);
    }
    return res;
}

std::vector<int> Nod::div_to_prime(unsigned long long val) {
    int i = 2;
    std::vector<int> res;
    while (i <= val) {
        if (val % i == 0) {
            val /= i;
            res.push_back(i);
        } else if (i % 2 == 0) {
            i++;
        } else {
            i += 2;
        }
    }
    return res;
}