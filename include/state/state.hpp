#pragma once

#include "OP.hpp"
#include "VM.hpp"

class MDA;

typedef enum : int {
    CREATE,
    NO_CUPS,
    IDLE,
    COINS_INSERTED,
    INVALID,
} state_e;

static std::string state_e_str[] = {
    "CREATE",
    "NO_CUPS",
    "IDLE",
    "COINS_INSERTED",
    "INVALID",
};

class Context_t {
private:
    int cups = 0;
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
    Context_t *ctx;
    MDA *mda;
    OP *op;

public:
    State_t(MDA *mda, OP *o, Context_t *ctx) : ctx(ctx), mda(mda), op(o){};

    virtual ~State_t() = default;

    virtual void create(){};

    virtual void insert_cups(int n){};

    virtual void coin(int n){};

    virtual void card(){};

    virtual void cancel(){};

    virtual void set_price(){};

    virtual void dispose_drink(int id){};

    virtual void additive(int id){};
};