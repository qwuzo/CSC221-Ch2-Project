/*
Author: Qwuzo
Date: 15/07/2026
Purpose: Calculate the rise of the ocean in the following years: 5, 7, and 10
*/
#include <iostream>

int main(){
    const double rateOfOceanRising = 1.5;

    double oceanChangeInFiveYears = rateOfOceanRising * 5;
    std::cout << "The ocean rose by " << oceanChangeInFiveYears << "mm" << std::endl;

    double oceanChangeInSevenYears = rateOfOceanRising * 7;
    std::cout << "The ocean rose by " << oceanChangeInSevenYears << "mm" << std::endl;

    double oceanChangeInTenYears = rateOfOceanRising * 10;
    std::cout << "The ocean rose by " << oceanChangeInTenYears << "mm" << std::endl;

    return 0;
}
