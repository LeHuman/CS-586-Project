#pragma once

#include "state.hpp"

/**
 * @brief The NoCups state
 */
class NoCups_s : public State_t {
public:
    NoCups_s(MDA *mda, OP *o, Context_t *ctx) : State_t(mda, o, ctx){};

    ~NoCups_s() override = default;

    /**
     * @brief Call this state's coin function
     *
     * Returns coins
     * 
     * @param f whether to accept the coins
     */
    void coin(int n) override;

    /**
     * @brief Call this state's insert_cups function
     * 
     * if n is > 0 then it saves it to context and changes state to idle
     *
     * @param n cups to insert
     */
    void insert_cups(int n) override;
};