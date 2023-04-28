#pragma once

#include "MDA.hpp"
#include "VM.hpp"

/* Concrete Factory for VM 2 */

class Fact_VM_2 : public AbstractFactory {
public:
    DataStore *createDS() override;

    StorePrice_t *createSP() override;

    ZeroCF_t *createZCF() override;

    IncreaseCF_t *createICF() override;

    ReturnCoins_t *createRC() override;

    DisposeDrink_t *createDD() override;

    DisposeAdditive_t *createDA() override;
};

/* VM 2 */

class VM_2 {
private:
    AbstractFactory *af;
    MDA *mda;
    DS_2 *ds;

public:
    VM_2(AbstractFactory *a, MDA *m);
    virtual ~VM_2() { delete ds; }

    void CREATE(float p);
    void COIN(int v);
    void SUGAR();
    void CREAM();
    void COFFEE();
    void InsertCups(int n);
    void SetPrice(int p);
    void CANCEL();
    void CARD(int x);
};
