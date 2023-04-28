#pragma once

#include "state.hpp"

/**
 * @brief The CoinsInserted state
 */
class CoinsInserted_s : public State_t {
public:
    CoinsInserted_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~CoinsInserted_s() override = default;

    /**
     * @brief Call this state's coin function
     *
     * returns coins
     * 
     * @param f whether to accept the coins
     */
    void coin(int f) override;

    /**
     * @brief Call this state's cancel function
     * 
     * returns coins, zeros funds, and changes state to Idle
     */
    void cancel() override;

    /**
     * @brief Call this state's dispose_drink function
     *
     * disposes drink and additives, changes state to NO_CUPS if cups are <= 1, else zero funds and change state to IDLE state
     * 
     * @param d drink enum as int
     */
    void dispose_drink(int d) override;

    /**
     * @brief Call this state's additive function
     * 
     * Toggles an additive to be output with drink
     *
     * @param d additive enum as int
     */
    void additive(int d) override;
};