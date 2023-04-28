#pragma once

#include "state.hpp"

class CoinsInserted_s : public State_t {
public:
    CoinsInserted_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~CoinsInserted_s() override = default;

    void coin(int f) override;

    void cancel() override;

    void dispose_drink(int id) override;

    void additive(int id) override;
};