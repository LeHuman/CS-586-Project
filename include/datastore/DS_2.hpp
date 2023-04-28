#pragma once

#include "datastore.hpp"

/**
 * @brief Datastore for VM 2
 */
class DS_2 : public DataStore {
private:
    /**
     * @brief Temporary price value
     */
    float temp_p;
    /**
     * @brief Temporary funds value
     */
    int temp_v;
    /**
     * @brief price value
     */
    float price;
    /**
     * @brief funds value
     */
    int cf;

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
    void set_temp_value(int v) {
        temp_v = v;
    }

    /**
     * @brief Get the temporary value
     *
     * @return int current temporary value
     */
    int get_temp_value() {
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
    void set_coins(int c) {
        cf = c;
    }

    /**
     * @brief Get coins
     *
     * @return int
     */
    int get_coins() {
        return cf;
    }
};