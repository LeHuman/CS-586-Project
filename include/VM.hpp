#pragma once

#include <string>

#include "factory/factory.hpp"
#include "datastore/datastores.hpp"

/**
 * @brief Drink enumerators, represented as ints
 */
typedef enum : int {
    TEA,
    COFFEE,
    LATTE,
    INVALID_DRINK,
} drink_e;

/**
 * @brief Drink enumerator names, represented as strings
 */
static std::string drink_e_str[] = {
    "TEA",
    "COFFEE",
    "LATTE",
    "INVALID",
};

/**
 * @brief Additive enumerators, represented as ints
 */
typedef enum : int {
    SUGAR,
    CREAM,
    INVALID_ADD,
} additive_e;

/**
 * @brief Additive enumerator names, represented as strings
 */
static std::string additive_e_str[] = {
    "SUGAR",
    "CREAM",
    "INVALID",
};