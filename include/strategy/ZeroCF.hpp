#pragma once

#include "../datastore/datastores.hpp"

class ZeroCF_t {
public:
    virtual ~ZeroCF_t() = default;
    virtual void ZeroCF(DataStore *ds) = 0;
};

class ZeroCF_Int : public ZeroCF_t {
public:
    void ZeroCF(DataStore *ds) override;
};

class ZeroCF_Float : public ZeroCF_t {
public:
    void ZeroCF(DataStore *ds) override;
};