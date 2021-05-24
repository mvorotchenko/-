#include <iostream>
#include <cmath>
#include <string>

int main()
{
    double Number = 0;
    int k = 0;
    std::cout << "Enter number:\n";
    std::cin >> Number;
    std::cout << "Enter k:\n";
    std::cin >> k;
    while (k < 0 || k > 10)
    {
        std::cout << "Enter k:\n";
        std::cin >> k;
    }
    Number = pow(Number, k);
    std::string s = std::to_string(Number);
    int tochka = 0;
    int countdo = 0;
    int countaf = 0;
    char RES[25];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '.' && countdo <=20)
        {
            countdo++;
            RES[i] = s[i];
        }
        else if (s[i] == '.')
        {
            RES[i] = '.';
            tochka = 1;
        }
        if (tochka == 1 && countaf <= 4)
        {
            countaf++;
            RES[i] = s[i];
        }
    }
    Number = atof(RES);
    std::cout << Number;

    return 0;
}
