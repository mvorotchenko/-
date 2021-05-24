#include <iostream>
#include <string>

int to_bin(int num)
{
    int bin = 0;
    int k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}

std::string to_8th(int n)
{
    const char ch[8] = { '0', '1', '2', '3', '4', '5', '6', '7' };
    std::string s;
    while (n)
    {
        s.insert(s.begin(), ch[n % 8]);
        n /= 8;
    }
    return s;
}

int main()
{
    int n = 5;
    int k = 501;
    int d = to_bin(k);
    std::cout << "Number: " << d;
    std::string s = std::to_string(d);
    std::string s1 = std::to_string(d);
    for (int i = 0; i <= s.size() - n; i++)
        s[i] = '0';
    std::cout << "\nNumber first 5 bit 0: " << s;
    for (int i = n - 1; i < s1.size(); i++)
        s1[i] = '0';
    std::cout << "\nNumber last 5 bit 0: " << s1;
    int result10 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        result10 <<= 1;
        result10 += s1[i] - '0';
    }
    std::string t8 = to_8th(result10);
    int result8 = stoi(t8);

    std::cout << "\nNumber last 5 bit 0 in 10th system: " << result10;
    std::cout << "\nNumber last 5 bit 0 in 8th system: " << result8;
}