#pragma once

#include "abstractFactory.hpp"

/**
 * @brief Concrete Factory for VM 2
 */
class VM2Factory : public AbstractFactory {
public:
    /**
     * @brief Create a new DataSto object for this strategy
     *
     * @return DataStore_t*
     */
    DataStore_t *createDS() override;

    /**
     * @brief Create a new StorePrice object for this strategy
     *
     * @return StorePrice_t*
     */
    StorePrice_t *createSP() override;

    /**
     * @brief Create a new ZeroCF object for this strategy
     *
     * @return ZeroCF_t*
     */
    ZeroCF_t *createZCF() override;

    /**
     * @brief Create a new IncreaseCF object for this strategy
     *
     * @return IncreaseCF_t*
     */
    IncreaseCF_t *createICF() override;

    /**
     * @brief Create a new ReturnCoins object for this strategy
     *
     * @return ReturnCoins_t*
     */
    ReturnCoins_t *createRC() override;

    /**
     * @brief Create a new DisposeDrink object for this strategy
     *
     * @return DisposeDrink_t*
     */
    DisposeDrink_t *createDD() override;

    /**
     * @brief Create a new DisposeAdditive object for this strategy
     *
     * @return DisposeAdditive_t*
     */
    DisposeAdditive_t *createDA() override;
};
