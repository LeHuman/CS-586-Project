#include <iostream>

#include "../include/VM_2.hpp"

/* VM 2 */

VM_2::VM_2(AbstractFactory *a, MDA *m) : af(a), mda(m) { ds = (DS_2 *)(af->createDS()); }

void VM_2::CREATE(float p) {
    ds->set_temp_price(p);
    mda->create();
}

void VM_2::COIN(int v) {
    ds->set_temp_value(v);

    if (ds->get_price() <= ds->get_coins() + v) {
        mda->coin(1);
    } else {
        mda->coin(0);
    }
}

void VM_2::SUGAR() {
    mda->additive(additive_e::SUGAR);
}

void VM_2::CREAM() {
    mda->additive(additive_e::CREAM);
}

void VM_2::COFFEE() {
    mda->dispose_drink(drink_e::COFFEE);
}

void VM_2::InsertCups(int n) {
    mda->insert_cups(n);
}

void VM_2::SetPrice(int p) {
    ds->set_temp_price(p);
    mda->set_price();
}

void VM_2::CANCEL() {
    mda->cancel();
}

void VM_2::CARD(int x) {
    if (ds->get_price() <= x) {
        mda->card();
    } else {
        std::cout << "Transaction Cancelled : Not Enough Money" << std::endl;
    }
}

/* Concrete Factory for VM 2 */

DataStore *Fact_VM_2::createDS() {
    if (!cacheDS) {
        cacheDS = new DS_2();
    }
    return cacheDS;
}

StorePrice_t *Fact_VM_2::createSP() {
    if (!cacheSP) {
        cacheSP = new StorePrice_Float();
    }
    return cacheSP;
}

ZeroCF_t *Fact_VM_2::createZCF() {
    if (!cacheZCF) {
        cacheZCF = new ZeroCF_Float();
    }
    return cacheZCF;
}

IncreaseCF_t *Fact_VM_2::createICF() {
    if (!cacheICF) {
        cacheICF = new IncreaseCF_Float();
    }
    return cacheICF;
}

ReturnCoins_t *Fact_VM_2::createRC() {
    if (!cacheRC) {
        cacheRC = new ReturnCoins_Float();
    }
    return cacheRC;
}

DisposeDrink_t *Fact_VM_2::createDD() {
    if (!cacheDD) {
        cacheDD = new DisposeDrink_2();
    }
    return cacheDD;
}

DisposeAdditive_t *Fact_VM_2::createDA() {
    if (!cacheDA) {
        cacheDA = new DisposeAdditive_2();
    }
    return cacheDA;
}