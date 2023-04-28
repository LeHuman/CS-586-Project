#include <iostream>
#include <utility>

#include "../../include/VM.hpp"
#include "../../include/factory/factory.hpp"
#include "../../include/strategy/strategy.hpp"

void IncreaseCF_Int::IncreaseCF(DataStore *ds) {
    if (DS_2 *ds_2 = dynamic_cast<DS_2 *>(ds)) {
        ds_2->set_coins(ds_2->get_coins() + ds_2->get_temp_value());
        int p = ds_2->get_price();
        std::cout << "Price of drink : " << p << std::endl;
        int b = ds_2->get_coins();
        std::cout << "Current funds : " << b << std::endl;
    }
}

void IncreaseCF_Float::IncreaseCF(DataStore *ds) {
    if (DS_1 *ds_1 = dynamic_cast<DS_1 *>(ds)) {
        ds_1->set_coins(ds_1->get_coins() + ds_1->get_temp_value());
        int p = ds_1->get_price();
        std::cout << "Price of drink : " << p << std::endl;
        int b = ds_1->get_coins();
        std::cout << "Current funds : " << b << std::endl;
    }
}