#include <iostream>

#include "../include/VM_1.hpp"

/* VM 1 */

VM_1::VM_1(AbstractFactory *a, MDA *m) : af(a), mda(m) { ds = (DS_1 *)(af->createDS()); }

void VM_1::create(int p) {
    ds->set_temp_price(p);
    mda->create();
}

void VM_1::coin(float v) {
    ds->set_temp_value(v);

    if (ds->get_price() <= ds->get_coins() + v)
        mda->coin(1);
    else
        mda->coin(0);
}

void VM_1::sugar() {
    mda->additive(SUGAR);
}

void VM_1::tea() {
    mda->dispose_drink(TEA);
}

void VM_1::latte() {
    mda->dispose_drink(LATTE);
}

void VM_1::insert_cups(int n) {
    mda->insert_cups(n);
}

void VM_1::set_price(float p) {
    ds->set_temp_price(p);
    mda->set_price();
}

void VM_1::cancel() {
    mda->cancel();
}

/* Concrete Factory for VM 1 */

DataStore *Fact_VM_1::createDS() {
    if (!cacheDS) {
        cacheDS = new DS_1();
    }
    return cacheDS;
}

StorePrice_t *Fact_VM_1::createSP() {
    if (!cacheSP) {
        cacheSP = new StorePrice_Int();
    }
    return cacheSP;
}

ZeroCF_t *Fact_VM_1::createZCF() {
    if (!cacheZCF) {
        cacheZCF = new ZeroCF_Int();
    }
    return cacheZCF;
}

IncreaseCF_t *Fact_VM_1::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Int();
    }
    return cacheICF;
}

ReturnCoins_t *Fact_VM_1::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Int();
    }
    return cacheRC;
}

DisposeDrink_t *Fact_VM_1::createDD() {
    if (!cacheDD) {
        cacheDD = new DisposeDrink_1();
    }
    return cacheDD;
}

DisposeAdditive_t *Fact_VM_1::createDA() {
    if (!cacheDA) {
        cacheDA = new DisposeAdditive_1();
    }
    return cacheDA;
}