#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    int userInput00 = 0;
    std::cin >> userInput00;
    
    std::cout << "Enter another number: ";
    int userInput01 = 0;
    std::cin >> userInput01;

    std::cout << "The product of " ;
    std::cout << userInput00;
    std::cout << " and " ;
    std::cout << userInput01;
    std::cout << " is: ";
    std::cout << userInput00 * userInput01 ;
    std::cout << std::endl;
    return 0;
}