#include <iostream>
#include <utility>

#include "../../include/VM.hpp"
#include "../../include/factory/factory.hpp"
#include "../../include/strategy/strategy.hpp"

void DisposeAdditive_1::DisposeAdditive(std::set<int> A) {
    for (auto &add : A) {
        if (add == SUGAR)
            std::cout << additive_e_str[add] << " added" << std::endl;
    }
}

void DisposeAdditive_2::DisposeAdditive(std::set<int> A) {
    for (auto &add : A) {
        if (add == SUGAR || add == CREAM)
            std::cout << additive_e_str[add] << " added" << std::endl;
    }
}