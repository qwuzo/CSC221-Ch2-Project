/* 
Author: Qwuzo
Date: 20/07/2026
Purpose: Calculate the distance a tank of gas can travel
in town compared to the highway.
*/
#include <iostream>

int main(){
    const int tankGas = 20;
    const double mpgTown = 23.5;
    const double mpgHighway = 28.9;
    
    double distanceTown = tankGas * mpgTown;
    std::cout << "Distance covered with a tank of gas in the town is " 
    << distanceTown << " mpg" << std::endl;
    
    double distanceHighway = tankGas * mpgHighway;
    std::cout << "Distance covered with a tank of gas in the town is "
    << distanceHighway << " mpg" << std::endl;
    
    return 0;
}