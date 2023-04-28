#pragma once

#include "../datastore/datastores.hpp"

/**
 * @brief Abstract strategy class for IncreaseCF function
 */
class IncreaseCF_t {
public:
    virtual ~IncreaseCF_t() = default;
    virtual void IncreaseCF(DataStore *ds) = 0;
};

/**
 * @brief Concrete strategy class for VM2 IncreaseCF function
 */
class IncreaseCF_Int : public IncreaseCF_t {
public:
    void IncreaseCF(DataStore *ds) override;
};

/**
 * @brief Concrete strategy class for VM1 IncreaseCF function
 */
class IncreaseCF_Float : public IncreaseCF_t {
public:
    void IncreaseCF(DataStore *ds) override;
};
