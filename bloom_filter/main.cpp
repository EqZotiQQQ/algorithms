#include <iostream>

#include "BloomFilter.h"
#include "MurmurHash3.h"

using namespace std;

int main() {
    uint64_t size = 442L;
    uint8_t numHashes = 32;
    BloomFilter bf(size, numHashes);
    bf.add((const uint8_t*)"smth", 5);
    bf.add((const uint8_t*)"1", 2);
    bf.add((const uint8_t*)"smth3", 5);
    bf.add((const uint8_t*)"4", 2);
    bf.add((const uint8_t*)"smth4", 6);
    bf.add((const uint8_t*)"5", 2);
    cout << bf.possiblyIsSetOf((const uint8_t*)"3", 2) << endl;
    cout << bf.possiblyIsSetOf((const uint8_t*)"4", 2) << endl;

    return 0;
}