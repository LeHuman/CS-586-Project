#include <iostream>
#include <utility>

#include "../../include/strategy/ZeroCF.hpp"

void ZeroCF_Int::ZeroCF(DataStore *ds) {
    if (DS_2 *ds_2 = dynamic_cast<DS_2 *>(ds)) {
        ds_2->set_coins(0);
        std::cout << "Reset funds" << std::endl;
    }
}

void ZeroCF_Float::ZeroCF(DataStore *ds) {
    if (DS_1 *ds_1 = dynamic_cast<DS_1 *>(ds)) {
        ds_1->set_coins(0);
        std::cout << "Reset funds" << std::endl;
    }
}