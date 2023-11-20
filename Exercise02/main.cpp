#include <iostream>
#include "F.cpp"

int main() {
    int numberOfTerms;
    int exitSystem;

    while(true){
    std::cout << "Press '0' to exit the system: "<< std::endl;
    std::cin >> exitSystem;
    if(exitSystem == 0){ break; }

    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> numberOfTerms;

    std::cout << "Fibonacci sequence: " << std::endl;

    for (int i = 1; i <= numberOfTerms; ++i) {
        std::cout << F(i) << " " << std::endl;
        }
    }

    return 0;
}

