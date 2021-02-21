#include <iostream>


void percent ( float D, float P){
    int i=1;
    do{
        i++;
        D=D*(1+0,15*i);

    } while (D < P);
    std::cout << "After " << i << "years";

}


int main(){
    float D,P;
    std::cout  <<"Your contribution: ";
    std::cin >>D;
    std::cout  <<"Expected sum: ";
    std::cin >>P;
    percent(D, P);

}