#include <iostream>
#include<cmath>



int main() {
    float a , b , c;
    std::cout << "x= ";
    std::cin >> a;
    b = ( sqrt (a * a + 1 ) - 1 ) / 2 + a;
    c = a / ( 2 * sqrt ( a *a + 1 ) );
    std::cout << "Bent(x)=" << b << "\n" << "Bent_derivative(x)=" <<c;
    return 0;
}