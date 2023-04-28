#include <iostream>
#include <utility>

#include "../include/abstractFactory.hpp"
#include "../include/VM.hpp"
#include "../include/strategy/strategy.hpp"

void DisposeDrink_1::DisposeDrink(int d) {
    if (d == TEA || d == LATTE)
        std::cout << "Disposing cup of " << drink_e_str[d] << std::endl;
}

void DisposeDrink_2::DisposeDrink(int d) {
    if (d == COFFEE)
        std::cout << "Disposing cup of " << drink_e_str[d] << std::endl;
}
