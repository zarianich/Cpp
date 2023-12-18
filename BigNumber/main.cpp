#include <iostream>
#include "bignumber.h"

int main(){

    BigNumber bnum;
    BigNumber bnum2;

    bnum.readFromConsole();
    bnum2.readFromConsole();

    bnum.printBigNumber();
    std::cout<<std::endl;
    bnum2.printBigNumber();
    std::cout<<std::endl;
    
    std::cout << std::boolalpha << (BigNumber("7643276342876783246893247") > BigNumber("4767846784647856547476")) << std::endl;
    std::cout << std::boolalpha << (BigNumber("4767846784647856547476") < BigNumber("7643276342876783246893247")) << std::endl;
    std::cout << std::boolalpha << (BigNumber("7643276342876783246893247") != BigNumber("4767846784647856547476")) << std::endl;
    std::cout << std::boolalpha << (BigNumber("7643276342876783246893247") == BigNumber("7643276342876783246893247")) << std::endl;


    return 0;
}