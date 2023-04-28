#include "../../include/factory/factory.hpp"

DataStore *VM1Factory::createDS() {
    if (!cacheDS) {
        cacheDS = new DS_1();
    }
    return cacheDS;
}

StorePrice_t *VM1Factory::createSP() {
    if (!cacheSP) {
        cacheSP = new StorePrice_Float();
    }
    return cacheSP;
}

ZeroCF_t *VM1Factory::createZCF() {
    if (!cacheZCF) {
        cacheZCF = new ZeroCF_Float();
    }
    return cacheZCF;
}

IncreaseCF_t *VM1Factory::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Float();
    }
    return cacheICF;
}

ReturnCoins_t *VM1Factory::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Float();
    }
    return cacheRC;
}

DisposeDrink_t *VM1Factory::createDD() {
    if (!cacheDD) {
        cacheDD = new DisposeDrink_1();
    }
    return cacheDD;
}

DisposeAdditive_t *VM1Factory::createDA() {
    if (!cacheDA) {
        cacheDA = new DisposeAdditive_1();
    }
    return cacheDA;
}