#pragma once

#include <set>

/**
 * @brief Abstract strategy class for DisposeAdditive function
 */
class DisposeAdditive_t {
public:
    virtual ~DisposeAdditive_t() = default;
    virtual void DisposeAdditive(std::set<int> A) = 0;
};

/**
 * @brief Concrete strategy class for VM1 DisposeAdditive function
 */
class DisposeAdditive_1 : public DisposeAdditive_t {
public:
    void DisposeAdditive(std::set<int> A) override;
};

/**
 * @brief Concrete strategy class for VM2 DisposeAdditive function
 */
class DisposeAdditive_2 : public DisposeAdditive_t {
public:
    void DisposeAdditive(std::set<int> A) override;
};