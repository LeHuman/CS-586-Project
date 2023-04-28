#pragma once

/**
 * @brief Abstract strategy class for ReturnCoins function
 */
class ReturnCoins_t {
public:
    virtual ~ReturnCoins_t() = default;
    virtual void ReturnCoins() = 0;
};

/**
 * @brief Concrete strategy class for VM1 ReturnCoins function
 */
class ReturnCoins_Int : public ReturnCoins_t {
public:
    void ReturnCoins() override;
};

/**
 * @brief Concrete strategy class for VM2 ReturnCoins function
 */
class ReturnCoins_Float : public ReturnCoins_t {
public:
    void ReturnCoins() override;
};