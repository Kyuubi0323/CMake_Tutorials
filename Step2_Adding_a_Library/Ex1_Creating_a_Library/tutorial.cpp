#include <iostream>
#include "MathFunctions.h"

int main() {
    double inputValue ; 
    double outputValue;
    
    std::cout << "InputValue: ";
	std::cin >> nputValue;
    
    outputValue = mathfunctions::sqrt(inputValue);

    
    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

    return 0;
}

