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
     * if f is true, change state to coinsinserted and clear additives, IncreaseCF as well
     * 
     * @param f whether to accept the coins
     */
    void coin(int f) override;

    /**
     * @brief Call this state's insert_cups function
     * 
     * if n > 0, add onto current context cups
     *
     * @param n cups to insert
     */
    void insert_cups(int n) override;

    /**
     * @brief Call this state's set_price function
     * 
     * Calls Storeprice
     */
    void set_price() override;

    /**
     * @brief Call this state's card function
     * 
     * Card accepted, clear additives and funds, change state to CoinsInserted
     * 
     */
    void card() override;
};