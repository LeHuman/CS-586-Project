#pragma once

#include "state.hpp"

/**
 * @brief The Create state
 */
class Create_s : public State_t {
public:
    Create_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~Create_s() override = default;

    /**
     * @brief Call this state's create function
     */
    void create() override;
};