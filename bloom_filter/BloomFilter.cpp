#include "BloomFilter.h"
#include "MurmurHash3.h"
#include <array>

std::array<uint64_t, 2> hash(const uint8_t* data, std::size_t len) {
    std::array<uint64_t, 2> hashValue;
    MurmurHash3_x86_128(data, len, 0, hashValue.data());
    return hashValue;
}

inline uint64_t nthHash(uint8_t n,
    uint64_t hashA,
    uint64_t hashB,
    uint64_t filterSize) {
    return (hashA + n * hashB) % filterSize;
}

BloomFilter::BloomFilter(uint64_t size, uint8_t numHashes) :
        mSize(size),
        mNumHashes(numHashes) {
    mBits.resize(size);
}

void BloomFilter::add(const uint8_t *data, std::size_t len) {
    std::array<uint64_t, 2> hashValues = hash(data, len);

    for (int n = 0; n < mNumHashes; n++) {
        mBits[nthHash(n, hashValues[0], hashValues[1], mSize)] = true;
    }
}

bool BloomFilter::possiblyIsSetOf(const uint8_t *data, std::size_t len) const {
    auto hashValues = hash(data, len);

    for (int n = 0; n < mNumHashes; n++) {
        if (!mBits[nthHash(n, hashValues[0], hashValues[1], mSize)]) {
            return false;
        }
    }

    return true;
}

