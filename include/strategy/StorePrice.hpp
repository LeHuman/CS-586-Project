#pragma once

#include "../datastore/datastores.hpp"

class StorePrice_t {
public:
    virtual ~StorePrice_t() = default;
    virtual void StorePrice(DataStore *ds) = 0;
};

class StorePrice_Int : public StorePrice_t {
public:
    void StorePrice(DataStore *ds) override;
};

class StorePrice_Float : public StorePrice_t {
public:
    void StorePrice(DataStore *ds) override;
};