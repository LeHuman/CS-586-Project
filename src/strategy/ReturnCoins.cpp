#include <iostream>
#include <utility>

#include "../include/abstractFactory.hpp"
#include "../include/VM.hpp"
#include "../include/strategy/strategy.hpp"

void ReturnCoins_Int::ReturnCoins() {
    std::cout << "return Coins" << std::endl;
}

void ReturnCoins_Float::ReturnCoins() {
    std::cout << "return Coins" << std::endl;
}