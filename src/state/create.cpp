#include <iostream>

#include "../../include/MDA.hpp"
#include "state/states.hpp"

void Create_s::create() {
    op->StorePrice();
    mda->change_state(NO_CUPS);
}
