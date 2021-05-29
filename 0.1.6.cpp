#include <iostream>

using namespace std;

double a, b, c;
int main(){
    cin >> a >> b >> c;
    if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
        cout << "Rectangle";
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > b*b+a*a)
        cout << "Obtuse";
    else
        cout << "Acute-angled";
}