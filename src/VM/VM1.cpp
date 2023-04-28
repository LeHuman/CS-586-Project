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