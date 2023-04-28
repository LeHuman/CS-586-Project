#include "../../include/factory/factory.hpp"

DataStore *VM2Factory::createDS() {
    if (!cacheDS) {
        cacheDS = new DS_2();
    }
    return cacheDS;
}

StorePrice_t *VM2Factory::createSP() {
    if (!cacheSP) {
        cacheSP = new StorePrice_Float();
    }
    return cacheSP;
}

ZeroCF_t *VM2Factory::createZCF() {
    if (!cacheZCF) {
        cacheZCF = new ZeroCF_Int();
    }
    return cacheZCF;
}

IncreaseCF_t *VM2Factory::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Int();
    }
    return cacheICF;
}

ReturnCoins_t *VM2Factory::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Int();
    }
    return cacheRC;
}

DisposeDrink_t *VM2Factory::createDD() {
    if (!cacheDD) {
        cacheDD = new DisposeDrink_2();
    }
    return cacheDD;
}

DisposeAdditive_t *VM2Factory::createDA() {
    if (!cacheDA) {
        cacheDA = new DisposeAdditive_2();
    }
    return cacheDA;
}