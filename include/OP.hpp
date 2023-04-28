#pragma once

#include <set>

#include "factory/factory.hpp"
#include "strategy/strategy.hpp"

/**
 * @brief The Output Processor receives actions from a state and uses the appropriate strategy
 */
class OP {
private:
    DataStore_t *ds;
    StorePrice_t *sp;
    ZeroCF_t *zcf;
    IncreaseCF_t *icf;
    ReturnCoins_t *rc;
    DisposeDrink_t *dd;
    DisposeAdditive_t *da;
    AbstractFactory *af;

public:
    OP(AbstractFactory *a);

    virtual ~OP();

    /**
     * @brief call StorePrice using the pointer to the set strategy
     */
    void StorePrice();

    /**
     * @brief call ZeroCF using the pointer to the set strategy
     */
    void ZeroCF();

    /**
     * @brief call IncreaseCF using the pointer to the set strategy
     */
    void IncreaseCF();

    /**
     * @brief call ReturnCoins using the pointer to the set strategy
     */
    void ReturnCoins();

    /**
     * @brief call DisposeDrink using the pointer to the set strategy
     */
    void DisposeDrink(int d);

    /**
     * @brief call DisposeAdditive using the pointer to the set strategy
     */
    void DisposeAdditive(std::set<int> a);
};
