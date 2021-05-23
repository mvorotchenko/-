#include <iostream>
using namespace std;
int main()
{
    int* arr;
    int N;
    int min;
    int sum;
    cout << "Enter number of numbers: "; cin >> N;
    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter number: "; cin >> arr[i];
    }

    int i, j;
    for (int i = j = 0; i < N; i++) {
        if (j + 1 < arr[i]) break;
        j += arr[i];
    }
    cout << j + 1;

}