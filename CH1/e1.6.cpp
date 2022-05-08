#include <iostream>


int main(){
    std::cout << "Explain whether the following program fragment is legal: " << std::endl;
    std::cout << "std::cout << \"The sun of \" << v1; " << std::endl;
    std::cout << "<< \" and \" << v2;" << std::endl;
    std::cout << "<<\" is \" << v1 + v2 << std::endl; " << std::endl << std::endl;

    std::cout << "Answer: " << std::endl;
    std::cout << "It's not legal since we see a semicolon after v1 at the first statement. Semicolon indicate the end of statement, however, we see clearly that it should not" << std::endl;
    std::cout << "We can fix it by either removing the semicolons or put std::cout before <<operator in the 2nd and last line" << std::endl << std::endl;

    
    std::cout << "std::cout << \"The sun of \" << v1; " << std::endl;
    std::cout << "std::cout << \" and \" << v2;" << std::endl;
    std::cout << "std::cout << \" is \" << v1 + v2 << std::endl; " << std::endl << std::endl;

    std::cout << "or" << std::endl << std::endl;
    
    std::cout << "std::cout << \"The sun of \" << v1 " << std::endl;
    std::cout << "<< \" and \" << v2" << std::endl;
    std::cout << " \" is \" << v1 + v2 << std::endl; " << std::endl;
    return 0;
}