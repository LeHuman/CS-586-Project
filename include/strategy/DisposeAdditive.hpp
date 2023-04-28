#pragma once

#include <set>

class DisposeAdditive_t {
public:
    virtual ~DisposeAdditive_t() = default;
    virtual void DisposeAdditive(std::set<int> A) = 0;
};

class DisposeAdditive_1 : public DisposeAdditive_t {
public:
    void DisposeAdditive(std::set<int> A) override;
};

class DisposeAdditive_2 : public DisposeAdditive_t {
public:
    void DisposeAdditive(std::set<int> A) override;
};