#pragma once

#include "strategy/strategy.hpp"
#include "datastore/datastores.hpp"

class AbstractFactory {
protected:
    DataStore *cacheDS = nullptr;
    StorePrice_t *cacheSP = nullptr;
    ZeroCF_t *cacheZCF = nullptr;
    IncreaseCF_t *cacheICF = nullptr;
    ReturnCoins_t *cacheRC = nullptr;
    DisposeDrink_t *cacheDD = nullptr;
    DisposeAdditive_t *cacheDA = nullptr;

public:
    AbstractFactory() = default;

    virtual ~AbstractFactory() = default;

    virtual DataStore *createDS() = 0;

    virtual StorePrice_t *createSP() = 0;

    virtual ZeroCF_t *createZCF() = 0;

    virtual IncreaseCF_t *createICF() = 0;

    virtual ReturnCoins_t *createRC() = 0;

    virtual DisposeDrink_t *createDD() = 0;

    virtual DisposeAdditive_t *createDA() = 0;
};