#include "../../include/factory/factory.hpp"

DataStore_t *VM2Factory::createDS() {
    if (!DS) {
        DS = new DS_2();
    }
    return DS;
}

StorePrice_t *VM2Factory::createSP() {
    if (!SP) {
        SP = new StorePrice_Float();
    }
    return SP;
}

ZeroCF_t *VM2Factory::createZCF() {
    if (!ZCF) {
        ZCF = new ZeroCF_Int();
    }
    return ZCF;
}

IncreaseCF_t *VM2Factory::createICF() {
    if (!ICF) {
        ICF = new IncreaseCF_Int();
    }
    return ICF;
}

ReturnCoins_t *VM2Factory::createRC() {
    if (!RC) {
        RC = new ReturnCoins_Int();
    }
    return RC;
}

DisposeDrink_t *VM2Factory::createDD() {
    if (!DD) {
        DD = new DisposeDrink_2();
    }
    return DD;
}

DisposeAdditive_t *VM2Factory::createDA() {
    if (!DA) {
        DA = new DisposeAdditive_2();
    }
    return DA;
}