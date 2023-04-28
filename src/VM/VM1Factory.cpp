#include "../../include/factory/factory.hpp"

DataStore_t *VM1Factory::createDS() {
    if (!DS) {
        DS = new DS_1();
    }
    return DS;
}

StorePrice_t *VM1Factory::createSP() {
    if (!SP) {
        SP = new StorePrice_Float();
    }
    return SP;
}

ZeroCF_t *VM1Factory::createZCF() {
    if (!ZCF) {
        ZCF = new ZeroCF_Float();
    }
    return ZCF;
}

IncreaseCF_t *VM1Factory::createICF() {
    if (!ICF) {
        ICF = new IncreaseCF_Float();
    }
    return ICF;
}

ReturnCoins_t *VM1Factory::createRC() {
    if (!RC) {
        RC = new ReturnCoins_Float();
    }
    return RC;
}

DisposeDrink_t *VM1Factory::createDD() {
    if (!DD) {
        DD = new DisposeDrink_1();
    }
    return DD;
}

DisposeAdditive_t *VM1Factory::createDA() {
    if (!DA) {
        DA = new DisposeAdditive_1();
    }
    return DA;
}