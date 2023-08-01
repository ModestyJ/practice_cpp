#include <iostream>

int main(){
    char input;
    do {
        std::cout << "Enter grade:";
        std::cin >> input;
        if(input=='A' || input=='a')
            std::cout << "Excelent\n";
        if(input=='B' || input=='b')
            std::cout << "Good\n";
        if(input=='C' || input=='c')
            std::cout << "Not bad\n";

    } while((input != 'A') &&
            (input != 'a') &&
            (input != 'B') &&
            (input != 'b') &&
            (input != 'C') &&
            (input != 'c') 
            );

    return 0;
}
