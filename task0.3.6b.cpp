#include <iostream>
#include<cmath>

void bent(float a){
    float b, c;
    b = ( sqrt (a * a + 1 ) - 1 ) / 2 + a;
    c = a / ( 2 * sqrt ( a *a + 1 ) );
    std::cout << "Bent(x)=" << b << "\n" << "Bent_derivative(x)=" <<c;

}

int main() {
    float a;
    std::cout << "x= ";
    std::cin >> a;
    bent(a);
}
