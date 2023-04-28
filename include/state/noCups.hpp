#pragma once

#include "state.hpp"

class NoCups_s : public State_t {
public:
    NoCups_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~NoCups_s() override = default;

    void coin(int n) override;

    void insert_cups(int n) override;
};