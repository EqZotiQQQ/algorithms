#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H
#include "MurmurHash3.h"
#include <vector> 

class BloomFilter {
public:
    BloomFilter(uint64_t size, uint8_t numHashes);
    void add(const uint8_t* data, std::size_t len);
    bool possiblyIsSetOf(const uint8_t* data, std::size_t len) const;
private:
    uint64_t mSize;
    uint8_t mNumHashes;
    std::vector<bool> mBits;
};

#endif // !BLOOMFILTER_H
