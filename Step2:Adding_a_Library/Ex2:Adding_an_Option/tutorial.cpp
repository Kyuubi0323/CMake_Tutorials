#include <iostream>
#include "MathFunctions.h"

int main() {
    double inputValue ; // Gi� tr? d?u v�o
    double outputValue;
    
    std::cout<<"InputValue";
	std::cin>>inputValue;
    // S? d?ng h�m sqrt t? thu vi?n MathFunctions
    outputValue = mathfunctions::sqrt(inputValue);

    // Hi?n th? k?t qu?
    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

    return 0;
}

