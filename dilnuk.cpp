#include <iostream>
using namespace std;

int isPrime(int n){
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}


int main()
{
    int number;
    cout << "Enter number: " << endl; cin >> number;
    if (number < 1)
    {
        cout << "entered number is not natural" << endl;
    }
    else
    {
        cout << endl;
        for (int i = 1; i <= number/2; i++)
        {
            if (number % i == 0)
            {
                isPrime(i);
            }
        }
    }
}