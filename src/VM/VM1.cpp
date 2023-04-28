#include <iostream>

#include "../../include/VM1.hpp"

/* VM 1 */

VM1::VM1(AbstractFactory *a, MDA *m) : af(a), mda(m) { ds = (DS_1 *)(af->createDS()); }

void VM1::create(int p) {
    ds->set_temp_price(p);
    mda->create();
}

void VM1::coin(float v) {
    ds->set_temp_value(v);

    if (ds->get_price() <= ds->get_coins() + v)
        mda->coin(1);
    else
        mda->coin(0);
}

void VM1::sugar() {
    mda->additive(SUGAR);
}

void VM1::tea() {
    mda->dispose_drink(TEA);
}

void VM1::latte() {
    mda->dispose_drink(LATTE);
}

void VM1::insert_cups(int n) {
    mda->insert_cups(n);
}

void VM1::set_price(float p) {
    ds->set_temp_price(p);
    mda->set_price();
}

void VM1::cancel() {
    mda->cancel();
}

/* Concrete Factory for VM 1 */

DataStore *VM1Factory::createDS() {
    if (!cacheDS) {
        cacheDS = new DS_1();
    }
    return cacheDS;
}

StorePrice_t *VM1Factory::createSP() {
    if (!cacheSP) {
        cacheSP = new StorePrice_Int();
    }
    return cacheSP;
}

ZeroCF_t *VM1Factory::createZCF() {
    if (!cacheZCF) {
        cacheZCF = new ZeroCF_Int();
    }
    return cacheZCF;
}

IncreaseCF_t *VM1Factory::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Int();
    }
    return cacheICF;
}

ReturnCoins_t *VM1Factory::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Int();
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