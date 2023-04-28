#include <iostream>
#include <utility>

#include "../include/abstractFactory.hpp"
#include "../include/VM.hpp"
#include "../include/strategy/strategy.hpp"

void IncreaseCF_Int::IncreaseCF(DataStore *ds) {
    DS_1 *ds1 = (DS_1 *)ds;
    ds1->set_coins(ds1->get_coins() + ds1->get_temp_value());
    int b = ds1->get_coins();
    std::cout << "Current balance : " << b << std::endl;
    int p = ds1->get_price();
    std::cout << "Price for a drink : " << p << std::endl;
}

void IncreaseCF_Float::IncreaseCF(DataStore *ds) {
    DS_2 *ds2 = (DS_2 *)ds;
    ds2->set_coins(ds2->get_coins() + ds2->get_temp_value());
    float b = ds2->get_coins();
    std::cout << "Current balance : " << b << std::endl;
    float p = ds2->get_price();
    std::cout << "Price for a drink : " << p << std::endl;
}