#pragma once

#include "state.hpp"

/**
 * @brief The Idle state
 */
class Idle_s : public State_t {
public:
    Idle_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~Idle_s() override = default;

    /**
     * @brief Call this state's coin function
     *
     * @param f whether to accept the coins
     */
    void coin(int f) override;

    /**
     * @brief Call this state's insert_cups function
     *
     * @param n cups to insert
     */
    void insert_cups(int n) override;

    /**
     * @brief Call this state's set_price function
     */
    void set_price() override;

    /**
     * @brief Call this state's card function
     */
    void card() override;
};