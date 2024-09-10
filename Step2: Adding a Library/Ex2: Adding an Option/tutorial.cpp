#include <iostream>
#include "MathFunctions.h"

int main() {
    double inputValue ; // Giá tr? d?u vào
    double outputValue;
    
    std::cout<<"InputValue";
	std::cin>>inputValue;
    // S? d?ng hàm sqrt t? thu vi?n MathFunctions
    outputValue = mathfunctions::sqrt(inputValue);

    // Hi?n th? k?t qu?
    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

    return 0;
}

