#include<iostream>
#include <cmath>

void isReLu(int x, int a){
    float y, z;
    y=x/(sqrt(1+a*x*x));
    z=(-a*x*x)/pow((a*x*x+1),3/2)+1/sqrt(1+a+x*x);
    if (x<0){
        std::cout << "isReLu(a,x)= " << y << "\n" <<  "isReLu_derivative(a,x)=" << z ;}
    else {
        std::cout << "isReLu(a,x)= " << x << "\n" <<  "isReLu_derivative(a,x)= 1" ;}
}

int main(){
    int x, a;
    std::cout << "x= ";
    std::cin >> x;
    std::cout << "a= ";
    std::cin >> a;
    isReLu(x,a);
}
