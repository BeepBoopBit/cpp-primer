#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    int leftRange = 0;
    std::cin >> leftRange;

    std::cout << "Enter another number: ";
    int rightRange = 0;;
    std::cin >> rightRange;

    while(leftRange <= rightRange){
        std::cout << leftRange++ << std::endl;
    }
    return 0;
}