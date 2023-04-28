#pragma once

#include "../datastore/datastores.hpp"
#include "../strategy/strategy.hpp"

/**
 * @brief Abstract class for VM factory objects
 */
class AbstractFactory {
protected:
    DataStore_t *DS = nullptr;
    StorePrice_t *SP = nullptr;
    ZeroCF_t *ZCF = nullptr;
    IncreaseCF_t *ICF = nullptr;
    ReturnCoins_t *RC = nullptr;
    DisposeDrink_t *DD = nullptr;
    DisposeAdditive_t *DA = nullptr;

public:
    AbstractFactory() = default;

    virtual ~AbstractFactory() = default;

    /**
     * @brief returns a specific object from this factory
     *
     * @return DataStore_t* factory specific object
     */
    virtual DataStore_t *createDS() = 0;
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