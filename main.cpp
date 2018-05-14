#include <iostream>
#include "block.h"

int main() {
    std::vector<std::string> transaction1;
    transaction1.emplace_back("Ryan gives Derek 100 bitcoins");
    transaction1.emplace_back("Derek gives Ryan 50 bitcoins");
    transaction1.emplace_back("Prof Tarng receives 10 bitcoins");

    std::vector<std::string> transaction2;
    transaction2.emplace_back("Ryan gives Derek 25 bitcoins");
    transaction2.emplace_back("Derek gives Ryan 200 bitcoins");
    transaction2.emplace_back("Prof Tarng receives 5 bitcoins");

    std::vector<std::string> transaction3;
    transaction3.emplace_back("Ryan gives Derek 32 bitcoins");
    transaction3.emplace_back("Derek gives Ryan 64 bitcoins");
    transaction3.emplace_back("Prof Tarng receives 12 bitcoins");

    block block1(transaction1, 1099511628211);
    block block2(transaction2, block1.getCurrentHash());
    block block3(transaction3, block2.getCurrentHash());


    std::cout << "block1 hash = " << block1.getCurrentHash() << std::endl;
    std::cout << "block2 hash = " << block2.getCurrentHash() << std::endl;
    std::cout << "block3 hash = " << block3.getCurrentHash() << std::endl;
    return 0;
}