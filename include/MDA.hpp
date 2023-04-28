#pragma once

#include <set>
#include <string>
#include <utility>
#include <vector>

#include "OP.hpp"
#include "VM.hpp"
#include "state/states.hpp"
#include "strategy/strategy.hpp"

class MDA {
private:
    std::vector<State_t *> states;
    State_t *current;
    int attempts;

public:
    MDA(OP *op);

    virtual ~MDA();

    void change_state(state_e stateID);

    void create();

    void insert_cups(int n);

    void coin(int f);

    void card();

    void cancel();

    void set_price();

    void dispose_drink(int id);

    void additive(int id);
};
