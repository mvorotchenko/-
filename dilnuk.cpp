#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    if (number < 1){
        cout << "entered number is not natural" << endl;
    }
    else{
        cout << endl;
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0){
                cout << i << " " << endl;
            }
        }
    }
}