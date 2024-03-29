#include <iostream>
#include <list>

#include "../include/MDA.hpp"

MDA::MDA(OP *op) {
    Context_t *ctx = new Context_t();
    
    Create_s *create_state = new Create_s(this, op, ctx);
    NoCups_s *no_cups_state = new NoCups_s(this, op, ctx);
    Idle_s *idle_state = new Idle_s(this, op, ctx);
    CoinsInserted_s *coins_inserted_state = new CoinsInserted_s(this, op, ctx);

    states.push_back(create_state);
    states.push_back(no_cups_state);
    states.push_back(idle_state);
    states.push_back(coins_inserted_state);

    change_state(CREATE);
}

MDA::~MDA() {
    for (size_t i = 0; i < states.size(); ++i) {
        if (states[i]) {
            delete states[i];
        }
    }
}

void MDA::change_state(state_e stateID) {
    current_state = states[stateID];
    std::cout << "New state: " << state_e_str[stateID] << std::endl;
}

/* Decentralized State Pattern */

void MDA::create() {
    current_state->create();
}

void MDA::insert_cups(int n) {
    current_state->insert_cups(n);
};

void MDA::coin(int f) {
    current_state->coin(f);
};

void MDA::card() {
    current_state->card();
};

void MDA::cancel() {
    current_state->cancel();
};

void MDA::set_price() {
    current_state->set_price();
};

void MDA::dispose_drink(int d) {
    current_state->dispose_drink(d);
};

void MDA::additive(int d) {
    current_state->additive(d);
};
