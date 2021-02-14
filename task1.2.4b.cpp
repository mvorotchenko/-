#include <iostream>


int main()
{
    float i, n, x;
    std::cout << "n=";
    std::cin >> n ;
    std::cout << "x=";
    std::cin >> x ;
    float sum = 1;
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1/pow((x*x+1),i);
    }
    std::cout << "sum = " << sum;
}