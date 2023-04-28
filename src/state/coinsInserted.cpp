#include <iostream>

#include "../../include/MDA.hpp"
#include "state/states.hpp"

void CoinsInserted_s::coin(int f) {
    op->ReturnCoins();
}

void CoinsInserted_s::additive(int d) {
    ctx->toggle_additive((additive_e)d);

    std::cout << "List of Current Additives : ";

    auto adds = ctx->get_additives();
    if (!adds.size()) {
        std::cout << "None";
    } else {
        for (auto add : adds) {
            std::cout << additive_e_str[add] << " ";
        }
    }
    std::cout << std::endl;
}

void CoinsInserted_s::dispose_drink(int d) {
    if (ctx->get_cups() <= 1) {
        mda->change_state(NO_CUPS);
    } else {
        ctx->set_cups(ctx->get_cups() - 1);
        op->ZeroCF();
        mda->change_state(IDLE);
    }
    op->DisposeDrink(d);
    op->DisposeAdditive(ctx->get_additives());
}

void CoinsInserted_s::cancel() {
    std::cout << "Transaction Canceled" << std::endl;
    op->ReturnCoins();
    op->ZeroCF();
    mda->change_state(IDLE);
}