#include <iostream>
#include <utility>

#include "../include/abstractFactory.hpp"
#include "../include/VM.hpp"
#include "../include/strategy/strategy.hpp"

void StorePrice_Int::StorePrice(DataStore *ds) {
    DS_1 *ds1 = (DS_1 *)ds;
    ds1->set_price(ds1->get_temp_price());
    int p = ds1->get_price();
    std::cout << "Price for a drink : " << p << std::endl;
}

void StorePrice_Float::StorePrice(DataStore *ds) {
    DS_2 *ds2 = (DS_2 *)ds;
    ds2->set_price(ds2->get_temp_price());
    float p = ds2->get_price();
    std::cout << "Price for a drink : " << p << std::endl;
}