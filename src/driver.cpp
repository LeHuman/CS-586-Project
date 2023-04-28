#include <fstream>
#include <iostream>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "../include/VM_1.hpp"
#include "../include/VM_2.hpp"

template <typename T>
T get_user_input(std::string func_name = "", std::string type = "", std::string id = "") {
    T input;
    if (func_name.length()) {
        if (type.length() && id.length())
            std::cout << "Operation: " << func_name << '(' << type << ' ' << id << ')' << std::endl;
        else
            std::cout << func_name << std::endl;
    }

    std::cout << "Enter a value of type ";
    if (type.length())
        std::cout << type;
    else
        std::cout << typeid(input).name();

    if (id.length())
        std::cout << " for parameter " << id;
    std::cout << ": ";
    while (!(std::cin >> input)) {
        std::cout << "  Invalid input. Please enter a valid value: ";
        std::cin.clear();                                                   // Clear the error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the remaining input
    }
    std::cout << "Value Received: " << input << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the remaining input
    return input;
}

void drive_vm1() {
    float p, v, n;
    char ch = 0;
    auto *af1 = new Fact_VM_1();
    auto *op = new OP(af1);
    auto *mda = new MDA(op);
    auto *vm1 = new VM_1(af1, mda);

    std::cout << R"""(
Vending Machine-1
MENU of Operations
    0. create(int)
    1. coin(float)
    2. sugar()
    3. tea()
    4. latte()
    5. insert_cups(int)
    6. set_price(float)
    7. cancel()
    q. Quit the demo program
Please make a note of these operations
Vending Machine-1 Execution
)""" << std::endl;

    while (ch != 'q') {
        std::cout << " Select Operation: " << std::endl;

        std::cout << "0-create,1-coin,2-sugar,3-tea,4-chocolate,5-insert_cups,6-set_price,7-cancel,q-quit" << std::endl;

        ch = get_user_input<decltype(ch)>();

        switch (ch) {
        case '0':
            p = get_user_input<decltype(p)>("create", "int", "p");
            vm1->create(p);
            break;
        case '1':
            v = get_user_input<decltype(v)>("coin", "int", "v");
            vm1->coin(v);
            break;
        case '2':
            std::cout << "Operation: sugar()" << std::endl;
            vm1->sugar();
            break;
        case '3':
            std::cout << "Operation: tea()" << std::endl;
            vm1->tea();
            break;
        case '4':
            std::cout << "Operation: latte()" << std::endl;
            vm1->latte();
            break;
        case '5':
            n = get_user_input<decltype(n)>("insert_cups", "int", "n");
            vm1->insert_cups(n);
            break;
        case '6':
            p = get_user_input<decltype(p)>("set_price", "int", "p");
            vm1->set_price(p);
            break;
        case '7':
            std::cout << "Operation: cancel()" << std::endl;
            vm1->cancel();
            break;
        case 'q':
            std::cout << "Quit VM_1" << std::endl;
            break;
        default:
            std::cout << "Operation: Unknown" << std::endl;
            break;
        };
    };

    delete af1;
    delete op;
    delete mda;
    delete vm1;
}

void drive_vm2() {
    int n, x, v;
    float p;
    char ch = 0;
    auto *af2 = new Fact_VM_2();
    auto *op = new OP(af2);
    auto *mda = new MDA(op);
    auto *vm2 = new VM_2(af2, mda);

    std::cout << R"""(
Vending Machine-2
MENU of Operations
    0. CREATE(float)
    1. COIN(int)
    2. SUGAR()
    3. COFFEE()
    4. CREAM()
    5. InsertCups(int)
    6. SetPrice(int)
    7. CANCEL()
    8. CARD(int)
    q. Quit the demo program
Please make a note of these operations
Vending Machine-2 Execution
)""" << std::endl;

    while (ch != 'q') {
        std::cout << " Select Operation: " << std::endl;

        std::cout << "0-CREATE,1-COIN,2-SUGAR,3-CREAM,4-COFFEE,5-InsertCups,6-SetPrice,7-CANCEL,8-CARD,q-quit" << std::endl;

        ch = get_user_input<decltype(ch)>();

        switch (ch) {
        case '0':
            p = get_user_input<decltype(p)>("CREATE", "float", "p");
            vm2->CREATE(p);
            break;
        case '1':
            v = get_user_input<decltype(v)>("COIN", "float", "v");
            vm2->COIN(v);
            break;
        case '2':
            std::cout << " Operation: SUGAR()" << std::endl;
            vm2->SUGAR();
            break;
        case '3':
            std::cout << " Operation: CREAM()" << std::endl;
            vm2->CREAM();
            break;
        case '4':
            std::cout << " Operation: COFFEE()" << std::endl;
            vm2->COFFEE();
            break;
        case '5':
            n = get_user_input<decltype(n)>("InsertCups", "int", "n");
            vm2->InsertCups(n);
            break;
        case '6':
            p = get_user_input<int>("SetPrice", "float", "p");
            vm2->SetPrice(p);
            break;
        case '7':
            std::cout << " Operation: CANCEL()" << std::endl;
            vm2->CANCEL();
            break;
        case '8':
            x = get_user_input<decltype(x)>("CARD", "int", "x");
            vm2->CARD(x);
            break;
        case 'q':
            std::cout << "Quit VM_1" << std::endl;
            break;
        default:
            std::cout << " Operation: Unknown" << std::endl;
            break;
        };
    };

    delete af2;
    delete op;
    delete mda;
    delete vm2;
}

int main() {
    char key = 0;
    while (key != 'q') {
        key = get_user_input<char>("Enter option:\n[1] VM1\n[2] VM2\n[q] quit");

        if (key == '1') {
            drive_vm1();
        } else if (key == '2') {
            drive_vm2();
        } else if (key != 'q') {
            std::cout << "  Invalid option: " << key << std::endl;
        }
    };
    return 0;
};