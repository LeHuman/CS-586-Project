#pragma once

#include "../datastore/datastores.hpp"

/**
 * @brief Abstract strategy class for ZeroCF function
 */
class ZeroCF_t {
public:
    virtual ~ZeroCF_t() = default;
    virtual void ZeroCF(DataStore_t *ds) = 0;
};

/**
 * @brief Concrete strategy class for VM2 ZeroCF function
 */
class ZeroCF_Int : public ZeroCF_t {
public:
    void ZeroCF(DataStore_t *ds) override;
};

/**
 * @brief Concrete strategy class for VM1 ZeroCF function
 */
class ZeroCF_Float : public ZeroCF_t {
public:
    void ZeroCF(DataStore_t *ds) override;
};