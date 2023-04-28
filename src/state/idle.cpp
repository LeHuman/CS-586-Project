#include <iostream>

#include "../../include/MDA.hpp"
#include "state/states.hpp"

void Idle_s::coin(int f) {
    if (f) {
        ctx->clear_additives();
        mda->change_state(COINS_INSERTED);
    }
    op->IncreaseCF();
}

void Idle_s::insert_cups(int n) {
    if (n > 0)
        ctx->set_cups(ctx->get_cups() + n);
    std::cout << "Number of Cups : " << ctx->get_cups() << std::endl;
}

void Idle_s::set_price() {
    op->StorePrice();
}

void Idle_s::card() {
    ctx->clear_additives();
    op->ZeroCF();
    mda->change_state(COINS_INSERTED);
}