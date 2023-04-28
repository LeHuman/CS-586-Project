#include <iostream>

#include "../../include/MDA.hpp"
#include "state/states.hpp"

void NoCups_s::coin(int f) {
    op->ReturnCoins();
}

void NoCups_s::insert_cups(int n) {
    if (n > 0) {
        ctx->set_cups(n);
        op->ZeroCF();
        std::cout << "Number of Cups : " << ctx->get_cups() << std::endl;
        mda->change_state(IDLE);
    }
}
