#pragma once

/* ReturnCoins */

class ReturnCoins_t {
public:
    virtual ~ReturnCoins_t() = default;
    virtual void ReturnCoins() = 0;
};

class ReturnCoins_Int : public ReturnCoins_t {
public:
    void ReturnCoins() override;
};

class ReturnCoins_Float : public ReturnCoins_t {
public:
    void ReturnCoins() override;
};