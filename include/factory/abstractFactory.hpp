#pragma once

#include "../datastore/datastores.hpp"
#include "../strategy/strategy.hpp"

/**
 * @brief Abstract class for VM factory objects
 */
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

    /**
     * @brief returns a specific object from this factory
     *
     * @return DataStore* factory specific object
     */
    virtual DataStore *createDS() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return StorePrice_t* factory specific object
     */
    virtual StorePrice_t *createSP() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return ZeroCF_t* factory specific object
     */
    virtual ZeroCF_t *createZCF() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return IncreaseCF_t* factory specific object
     */
    virtual IncreaseCF_t *createICF() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return ReturnCoins_t* factory specific object
     */
    virtual ReturnCoins_t *createRC() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return DisposeDrink_t* factory specific object
     */
    virtual DisposeDrink_t *createDD() = 0;
    /**
     * @brief returns a specific object from this factory
     *
     * @return DisposeAdditive_t* factory specific object
     */
    virtual DisposeAdditive_t *createDA() = 0;
};