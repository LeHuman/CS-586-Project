#pragma once

#include "MDA.hpp"
#include "VM.hpp"

/* Concrete Factory for VM 1 */

class Fact_VM_1 : public AbstractFactory {
public:
    DataStore *createDS() override;

    StorePrice_t *createSP() override;

    ZeroCF_t *createZCF() override;

    IncreaseCF_t *createICF() override;

    ReturnCoins_t *createRC() override;

    DisposeDrink_t *createDD() override;

    DisposeAdditive_t *createDA() override;
};

/* VM 1 */

class VM_1 {
private:
    AbstractFactory *af;
    MDA *mda;
    DS_1 *ds;

public:
    VM_1(AbstractFactory *a, MDA *m);
    virtual ~VM_1() { delete ds; }

    void create(int p);
    void coin(float v);
    void sugar();
    void tea();
    void latte();
    void insert_cups(int n);
    void set_price(float p);
    void cancel();
};