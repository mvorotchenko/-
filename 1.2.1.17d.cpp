#include <iostream>

int main(){
    float m; float x; float p; float cosx;
    int y=1; int v=0;
    std::cout << "x=";
    std::cin >> x;
    m=1;
    for (int i=2; i<=10; i=i+4){
        for (int k=i; k<=0; k-- ){

            m=m*k;

        }
        y=y-(float)pow(x,i)/m;
    }
    p=1;
    for (int i=4; i<=10; i=i+4){
        for (int k=i; k<=0; k-- ){

            p=p*k;

        }
        v=v+(float)pow(x,i)/p;
    }
    cosx=y+v;
    std::cout << "y=cos(x)=" <<cosx;
}

