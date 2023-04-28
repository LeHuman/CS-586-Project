#pragma once

#include "datastore.hpp"

/* Datastore for VM 2 */

class DS_2 : public DataStore {
private:
    float temp_p, price;
    int temp_v, cf;

public:
    void set_temp_price(float p) {
        temp_p = p;
    }

    float get_temp_price() {
        return temp_p;
    }

    void set_temp_value(int v) {
        temp_v = v;
    }

    int get_temp_value() {
        return temp_v;
    }

    void set_price(float p) {
        price = p;
    }

    float get_price() {
        return price;
    }

    void set_coins(int c) {
        cf = c;
    }

    int get_coins() {
        return cf;
    }
};