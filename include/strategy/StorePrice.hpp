#pragma once

#include "../datastore/datastores.hpp"

/**
 * @brief Abstract strategy class for StorePrice function
 */
class StorePrice_t {
public:
    virtual ~StorePrice_t() = default;
    virtual void StorePrice(DataStore *ds) = 0;
};

/**
 * @brief Concrete strategy class for StorePrice function
 */
class StorePrice_Int : public StorePrice_t {
public:
    void StorePrice(DataStore *ds) override;
};

/**
 * @brief Concrete strategy class for VM1 and VM2 StorePrice function
 */
class StorePrice_Float : public StorePrice_t {
public:
    void StorePrice(DataStore *ds) override;
};