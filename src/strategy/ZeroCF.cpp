#include <iostream>
#include <utility>

#include "../include/strategy/ZeroCF.hpp"

void ZeroCF_Int::ZeroCF(DataStore *ds) {
    DS_1 *ds1 = (DS_1 *)ds;
    ds1->set_coins(0);
    std::cout << "Reset actual balance" << std::endl;
}

void ZeroCF_Float::ZeroCF(DataStore *ds) {
    DS_2 *ds2 = (DS_2 *)ds;
    ds2->set_coins(0);
    std::cout << "Reset actual balance" << std::endl;
}