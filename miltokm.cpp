#include <iostream>

int main() {

    double mil;
    double kilometer;

    std::cout << "Please enter the values.\n";
    std::cout << "Mil:";
    std::cin >> mil;

    kilometer = (mil * 1.609344);

    std::cout << "Your value is equal " << kilometer << " km.";
}