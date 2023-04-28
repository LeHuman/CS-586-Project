#include "../include/OP.hpp"

OP::OP(AbstractFactory *a) : af(a) {
    ds = af->createDS();
    sp = af->createSP();
    zcf = af->createZCF();
    icf = af->createICF();
    rc = af->createRC();
    dd = af->createDD();
    da = af->createDA();
}

OP::~OP() {
    delete ds;
    delete sp;
    delete zcf;
    delete icf;
    delete rc;
    delete dd;
    delete da;
}

void OP::StorePrice() {
    sp->StorePrice(ds);
}

void OP::ZeroCF() {
    zcf->ZeroCF(ds);
}

void OP::IncreaseCF() {
    icf->IncreaseCF(ds);
}

void OP::ReturnCoins() {
    rc->ReturnCoins();
}

void OP::DisposeDrink(int d) {
    dd->DisposeDrink(d);
}

void OP::DisposeAdditive(std::set<int> a) {
    da->DisposeAdditive(std::move(a));
}
