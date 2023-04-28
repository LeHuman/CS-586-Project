#pragma once

#include "datastore.hpp"

/* Datastore for VM 1 */

class DS_1 : public DataStore {
private:
    float temp_p, temp_v, price, cf;

public:
    void set_temp_price(float p) {
        temp_p = p;
    }

    float get_temp_price() {
        return temp_p;
    }

    void set_temp_value(float v) {
        temp_v = v;
    }

    float get_temp_value() {
        return temp_v;
    }

    void set_price(float p) {
        price = p;
    }

    float get_price() {
        return price;
    }

    void set_coins(float c) {
        cf = c;
    }

    float get_coins() {
        return cf;
    }
};