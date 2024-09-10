#include <iostream>
#include <string>
#include <cmath>


int main(int argc, char* argv[]) 
{
    std::string number = "10.5";
    const double value = std::stod(argv[1]);
    std::cout << "Value: " << value << std::endl;
    return 0;
}
