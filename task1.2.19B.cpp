#include <iostream>
 using namespace std;

 int main(){
    float x, k;
    cout << "x=";
    cin >> x;
    cout << "k=";
    cin >> k;
    float s=1;
    for (int i=1; i <=k ; i++)
    {
        s = (float) s * (x/i);
    }
    cout << "xk="<< s;

}