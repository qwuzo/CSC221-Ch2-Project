/*
Author: Qwuzo
Date: 20/07/26
Purpose: Calculate the amount of people consuming Energy drinks
and how many of those prefer citrus-flavored drinks
*/
#include <iostream>
#include <cmath>

int main(){
    const int customer = 16500;
    
    double eneryDrinkConsumer = customer * .15;
    std::cout << "Energy Drink Consumer: " << eneryDrinkConsumer << "\n";
    
    double citrusFlavoredEnergyDrink = eneryDrinkConsumer * .58;
    std::cout << "Prefered Citrus-Flavored: " << std::ceil(citrusFlavoredEnergyDrink);
    
    return 0;
}