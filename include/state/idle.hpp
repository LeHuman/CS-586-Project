#pragma once

#include "state.hpp"

class Idle_s : public State_t {
public:
    Idle_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~Idle_s() override = default;

    void coin(int f) override;

    void insert_cups(int n) override;

    void set_price() override;

    void card() override;
};