#include <iostream>
#include <stdio.h>


int main() {
    long long int a,b,c;
    std::cout << "your first number: ";
    std::cin >> a;
    std::cout << "your second number: ";
    std::cin >> b;
    c = a+b;
    std::cout << a << " " << b <<"\n" <<c;
    return 0;
}
