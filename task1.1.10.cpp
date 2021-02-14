#include <iostream>
#include <cmath>

int main(){
    float x, y, r, a, b;
    float k, l, m;
    std::cin >> x >> y >> r >> a >> b;
    k = pow(a, 2) + 1;
    l = 2 * a * (b - y) - 2 * x;
    m = pow(x, 2) - pow(r, 2) + pow(b - y, 2);
    float D = pow(l, 2) - 4 * k * m;
    std::cout << "D: " << D;
    if (D >= 0)
    {
        float x1 = (-l - sqrt(D)) / (2 * k);
        float y1 = a * x1 + b;
        float x2 = (-l + sqrt(D)) / (2 * k);
        float y2 = a * x2 + b;
        std::cout << "(" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")";
    }
}

