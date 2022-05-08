#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    int userInput00 = 0;
    std::cin >> userInput00;
    
    std::cout << "Enter another number: ";
    int userInput01 = 0;
    std::cin >> userInput01;

    std::cout << "The product of " << userInput00 << " and " << userInput01 << " is: " << userInput00 * userInput01 << std::endl;
    return 0;
}