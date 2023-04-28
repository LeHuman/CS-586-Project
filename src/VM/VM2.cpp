#include <iostream>

#include "../../include/VM2.hpp"

/* VM 2 */

VM2::VM2(AbstractFactory *a, MDA *m) : af(a), mda(m) { ds = (DS_2 *)(af->createDS()); }

void VM2::CREATE(float p) {
    ds->set_temp_price(p);
    mda->create();
}

void VM2::COIN(int v) {
    ds->set_temp_value(v);

    if (ds->get_price() <= ds->get_coins() + v) {
        mda->coin(1);
    } else {
        mda->coin(0);
    }
}

void VM2::SUGAR() {
    mda->additive(additive_e::SUGAR);
}

void VM2::CREAM() {
    mda->additive(additive_e::CREAM);
}

void VM2::COFFEE() {
    mda->dispose_drink(drink_e::COFFEE);
}

void VM2::InsertCups(int n) {
    mda->insert_cups(n);
}

void VM2::SetPrice(int p) {
    ds->set_temp_price(p);
    mda->set_price();
}

void VM2::CANCEL() {
    mda->cancel();
}

void VM2::CARD(int x) {
    if (ds->get_price() <= x) {
        mda->card();
    } else {
        std::cout << "Transaction Cancelled : Not Enough Money" << std::endl;
    }
}

/* Concrete Factory for VM 2 */

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
        cacheZCF = new ZeroCF_Float();
    }
    return cacheZCF;
}

IncreaseCF_t *VM2Factory::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Float();
    }
    return cacheICF;
}

ReturnCoins_t *VM2Factory::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Float();
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