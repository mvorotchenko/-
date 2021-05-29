#include <iostream>

using namespace std;

unsigned n;
double b;

unsigned func_a(unsigned  n, double b){
    double bk = b;
    for(int i = 0; i < n; i++){
        bk = b + 1/bk;
        cout << "bk " << bk << endl;
    }
    return bk;
}

int main() {
    cin >> n >> b;
    cout << func_a(n, b) << endl;
    return 0;
}
