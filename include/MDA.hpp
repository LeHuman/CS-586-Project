#pragma once

#include <set>
#include <string>
#include <utility>
#include <vector>

#include "OP.hpp"
#include "VM.hpp"
#include "state/states.hpp"
#include "strategy/strategy.hpp"

/**
 * @brief Model Driven Architecture class
 * This servers as the connection between VM and states
 */
class MDA {
private:
    /**
     * @brief states in this MDA
     */
    std::vector<State_t *> states;
    /**
     * @brief the current state
     */
    State_t *current;

public:
    /**
     * @brief Construct a new MDA object
     *
     * @param op The output processor
     */
    MDA(OP *op);

    /**
     * @brief Destroy the MDA object
     */
    virtual ~MDA();

    /**
     * @brief Changes state for this MDA
     *
     * @param stateID state enum
     */
    void change_state(state_e stateID);

    /**
     * @brief Call the equivalent create function on the current state
     */
    void create();

    /**
     * @brief Call the equivalent insert_cups function on the current state
     *
     * @param n cups to insert
     */
    void insert_cups(int n);

    /**
     * @brief Call the equivalent coin function on the current state
     *
     * @param f coins to insert
     */
    void coin(int f);

    /**
     * @brief Call the equivalent card function on the current state
     *
     */
    void card();

    /**
     * @brief Call the equivalent cancel function on the current state
     *
     */
    void cancel();

    /**
     * @brief Call the equivalent set_price function on the current state
     *
     */
    void set_price();

    /**
     * @brief Call the equivalent dispose_drink function on the current state
     *
     * @param d drink enum d to dispose
     */
    void dispose_drink(int d);

    /**
     * @brief Call the equivalent additive function on the current state
     *
     * @param d additive enum d to dispose
     */
    void additive(int d);
};
