#include <iostream>
#include <utility>

#include "../../include/VM.hpp"
#include "../../include/factory/factory.hpp"
#include "../../include/strategy/strategy.hpp"

void StorePrice_Int::StorePrice(DataStore_t *ds) {
    if (DS_2 *ds_2 = dynamic_cast<DS_2 *>(ds)) {
        ds_2->set_price(ds_2->get_temp_price());
        float p = ds_2->get_price();
        std::cout << "Price of drink : " << p << std::endl;
    } else if (DS_1 *ds_1 = dynamic_cast<DS_1 *>(ds)) {
        ds_1->set_price(ds_1->get_temp_price());
        float p = ds_1->get_price();
        std::cout << "Price of drink : " << p << std::endl;
    }
}

void StorePrice_Float::StorePrice(DataStore_t *ds) {
    if (DS_2 *ds_2 = dynamic_cast<DS_2 *>(ds)) {
        ds_2->set_price(ds_2->get_temp_price());
        float p = ds_2->get_price();
        std::cout << "Price of drink : " << p << std::endl;
    } else if (DS_1 *ds_1 = dynamic_cast<DS_1 *>(ds)) {
        ds_1->set_price(ds_1->get_temp_price());
        float p = ds_1->get_price();
        std::cout << "Price of drink : " << p << std::endl;
    }
}