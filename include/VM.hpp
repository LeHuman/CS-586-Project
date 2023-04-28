#pragma once

#include <string>

#include "abstractFactory.hpp"
#include "datastore/datastores.hpp"

typedef enum : int {
    TEA,
    COFFEE,
    LATTE,
    INVALID_DRINK,
} drink_e;

static std::string drink_e_str[] = {
    "TEA",
    "COFFEE",
    "LATTE",
    "INVALID",
};

typedef enum : int {
    SUGAR,
    CREAM,
    INVALID_ADD,
} additive_e;

static std::string additive_e_str[] = {
    "SUGAR",
    "CREAM",
    "INVALID",
};