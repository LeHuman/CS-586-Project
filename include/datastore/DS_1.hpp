#pragma once

#include "datastore.hpp"

/**
 * @brief Datastore for VM 1
 */
class DS_1 : public DataStore {
private:
    /**
     * @brief Temporary price value
     */
    float temp_p;
    /**
     * @brief Temporary funds value
     */
    float temp_v;
    /**
     * @brief price value
     */
    float price;
    /**
     * @brief funds value
     */
    float cf;

public:
    /**
     * @brief Set the temporary price
     *
     * @param p price to set
     */
    void set_temp_price(float p) {
        temp_p = p;
    }

    /**
     * @brief Get the temporary price
     *
     * @return float current temp price
     */
    float get_temp_price() {
        return temp_p;
    }

    /**
     * @brief Set the temporary funds
     *
     * @param v funds to set
     */
    void set_temp_value(float v) {
        temp_v = v;
    }

    /**
     * @brief Get the temporary value
     *
     * @return float current temporary value
     */
    float get_temp_value() {
        return temp_v;
    }

    /**
     * @brief Set the price
     *
     * @param p price to set
     */
    void set_price(float p) {
        price = p;
    }

    /**
     * @brief Get the price
     *
     * @return float current price
     */
    float get_price() {
        return price;
    }

    /**
     * @brief Set coins
     *
     * @param c coins to set
     */
    void set_coins(float c) {
        cf = c;
    }

    /**
     * @brief Get coins
     *
     * @return float
     */
    float get_coins() {
        return cf;
    }
};