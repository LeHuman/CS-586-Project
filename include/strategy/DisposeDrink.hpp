#pragma once

class DisposeDrink_t {
public:
    virtual ~DisposeDrink_t() = default;
    virtual void DisposeDrink(int d) = 0;
};

class DisposeDrink_1 : public DisposeDrink_t {
public:
    void DisposeDrink(int d) override;
};

class DisposeDrink_2 : public DisposeDrink_t {
public:
    void DisposeDrink(int d) override;
};