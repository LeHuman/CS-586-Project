#pragma once

#include "MDA.hpp"
#include "VM.hpp"

/**
 * @brief User Interface for VM2
 */
class VM2 {
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
    DS_2 *ds;

public:
    VM2(AbstractFactory *a, MDA *m);
    virtual ~VM2() { delete ds; }

    /**
     * @brief Create a new instance, and set inital price
     *
     * @param p inital price
     */
    void CREATE(float p);
    /**
     * @brief insert coins
     *
     * @param v coins to insert
     */
    void COIN(int v);
    /**
     * @brief Request sugar as an additive
     */
    void SUGAR();
    /**
     * @brief Request cream as an additive
     */
    void CREAM();
    /**
     * @brief Request coffee to be disposed
     */
    void COFFEE();
    /**
     * @brief Request to insert cups
     *
     * @param n cups to insert
     */
    void InsertCups(int n);
    /**
     * @brief Request a price change of a drink
     *
     * @param p price to set
     */
    void SetPrice(int p);
    /**
     * @brief Request cancellation of current selection
     */
    void CANCEL();
    void CARD(int x);
};
