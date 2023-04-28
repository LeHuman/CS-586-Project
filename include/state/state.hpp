#pragma once

#include "OP.hpp"
#include "VM.hpp"

class MDA;

/**
 * @brief State enumerators, represented as ints
 */
typedef enum : int {
    CREATE,
    NO_CUPS,
    IDLE,
    COINS_INSERTED,
    INVALID,
} state_e;

/**
 * @brief State enumerator names, represented as strings
 */
static std::string state_e_str[] = {
    "CREATE",
    "NO_CUPS",
    "IDLE",
    "COINS_INSERTED",
    "INVALID",
};

/**
 * @brief Context data for states
 */
class Context_t {
private:
    /**
     * @brief Available cups
     */
    int cups = 0;
    /**
     * @brief
     */
    std::set<int> a;

public:
    Context_t() = default;

    ~Context_t() = default;

    void set_cups(int n) {
        cups = n;
    }

    int get_cups() {
        return cups;
    }

    void clear_additives() {
        a.clear();
    }

    void set_additive(additive_e add) {
        a.insert(add);
    }

    std::set<int> get_additives() {
        return a;
    }
};

class State_t {
protected:
    /**
     * @brief Context data for states
     */
    Context_t *ctx;
    /**
     * @brief The related MDA object
     */
    MDA *mda;
    /**
     * @brief The related OP object
     */
    OP *op;

public:
    State_t(MDA *mda, OP *o, Context_t *ctx) : ctx(ctx), mda(mda), op(o){};

    virtual ~State_t() = default;

    /**
     * @brief Call the state's create function
     */
    virtual void create(){};

    /**
     * @brief Call the state's insert_cups function
     */
    virtual void insert_cups(int n){};

    /**
     * @brief Call the state's coin function
     */
    virtual void coin(int n){};

    /**
     * @brief Call the state's card function
     */
    virtual void card(){};

    /**
     * @brief Call the state's cancel function
     */
    virtual void cancel(){};

    /**
     * @brief Call the state's set_price function
     */
    virtual void set_price(){};

    /**
     * @brief Call the state's dispose_drink function
     */
    virtual void dispose_drink(int d){};

    /**
     * @brief Call the state's additive function
     */
    virtual void additive(int d){};
};