#include <iostream>
#include <cmath>
int main(){
    int a0; int a1; int a2;
    float ak;float n; float dob;
    std::cout << "n=";
    std::cin >> n;
    dob=1;
    for ( int k=3; k<=n; k++){
        a0=1;
        a1=1;
        a2=3;
        ak= a1+a2/pow(2,(k-1));
        dob=dob*ak/pow(3,k);
        a0=a1;
        a1=a2;
        a2=ak;


    }
    std::cout << "multiplication=" <<dob;
}
