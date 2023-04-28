#pragma once

/**
 * @brief Abstract strategy class for DisposeDrink function
 */
class DisposeDrink_t {
public:
    virtual ~DisposeDrink_t() = default;
    virtual void DisposeDrink(int d) = 0;
};

/**
 * @brief Concrete strategy class for VM1 DisposeDrink function
 */
class DisposeDrink_1 : public DisposeDrink_t {
public:
    void DisposeDrink(int d) override;
};

/**
 * @brief Concrete strategy class for VM2 DisposeDrink function
 */
class DisposeDrink_2 : public DisposeDrink_t {
public:
    void DisposeDrink(int d) override;
};