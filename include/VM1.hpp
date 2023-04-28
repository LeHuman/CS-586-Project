#pragma once

#include "MDA.hpp"
#include "VM.hpp"

/**
 * @brief User Interface for VM1
 */
class VM1 {
private:
    /**
     * @brief The factory to use
     */
    AbstractFactory *af;
    /**
     * @brief The MDA object
     */
    MDA *mda;
    /**
     * @brief The appropiate Datastore
     */
    DS_1 *ds;

public:
    VM1(AbstractFactory *a, MDA *m);
    virtual ~VM1() { delete ds; }

    /**
     * @brief Create a new instance, and set inital price
     *
     * @param p inital price
     */
    void create(int p);
    /**
     * @brief insert coins
     *
     * @param v coins to insert
     */
    void coin(float v);
    /**
     * @brief Request sugar as an additive
     */
    void sugar();
    /**
     * @brief Request tea to be disposed
     */
    void tea();
    /**
     * @brief Request latte to be disposed
     */
    void latte();
    /**
     * @brief Request to insert cups
     *
     * @param n cups to insert
     */
    void insert_cups(int n);
    /**
     * @brief Request a price change of a drink
     *
     * @param p price to set
     */
    void set_price(float p);
    /**
     * @brief Request cancellation of current selection
     */
    void cancel();
};