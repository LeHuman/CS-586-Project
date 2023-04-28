#pragma once

#include <set>

#include "abstractFactory.hpp"
#include "strategy/strategy.hpp"

class OP {
private:
    DataStore *ds;
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

    void StorePrice();

    void ZeroCF();

    void IncreaseCF();

    void ReturnCoins();

    void DisposeDrink(int id);

    void DisposeAdditive(std::set<int> a);
};
