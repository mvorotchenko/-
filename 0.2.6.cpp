#include <iostream>
#include <cmath>


void count (float a,float b,float c,float R){
    float S;

    S= 2*R*R*sin(a)*sin(b)*sin(c);
    std::cout << S;
}

int main(){
    int a, b, c, R;
    std::cout << "a=" << "\n";
    std::cin >> a;
    std::cout << "b=" << "\n";
    std::cin >> b;
    std::cout << "c=" << "\n";
    std::cin >> c;
    std::cout << "R=" << "\n";
    std::cin >> R;
    count(a,b,c,R);


}