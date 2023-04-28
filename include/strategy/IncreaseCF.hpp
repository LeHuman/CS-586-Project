#pragma once

#include "../datastore/datastores.hpp"

class IncreaseCF_t {
public:
    virtual ~IncreaseCF_t() = default;
    virtual void IncreaseCF(DataStore *ds) = 0;
};

class IncreaseCF_Int : public IncreaseCF_t {
public:
    void IncreaseCF(DataStore *ds) override;
};

class IncreaseCF_Float : public IncreaseCF_t {
public:
    void IncreaseCF(DataStore *ds) override;
};
