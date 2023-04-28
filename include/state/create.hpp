#pragma once

#include "state.hpp"

class Create_s : public State_t {
public:
    Create_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~Create_s() override = default;

    void create() override;
};