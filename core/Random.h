#ifndef RANDOM_H
#define RANDOM_H

#include <random>

struct Random {
    // inclusive
    static float Range(float start, float end){
        std::random_device rd; // todo: random device is slow and the seed should be cached
        std::mt19937 mt(rd());
        std::uniform_real_distribution<float> dist(start, end);
        return dist(mt);
    }
};


#endif
