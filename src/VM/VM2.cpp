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

    if (ds->get_price() <= ds->get_coins() + v)
        mda->coin(1);
    else
        mda->coin(0);
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