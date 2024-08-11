#include <iostream>
#include <string>

int main() {
    std::string number = "10.5";
    double value = std::stod(number);
    std::cout << "gia tri la : " << value << std::endl;
    return 0;
}
