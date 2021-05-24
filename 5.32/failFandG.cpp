#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int create_digit(std::string s)
{
    char digit[10];
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit[index] = s[i];
            index++;
        }
    }
    int X = atoi(digit);
    return X;
}

int main()
{
    std::ifstream file("Coor.txt");
    std::string s;
    int max1 = 0;
    int max2 = 0;
    int m1[3];
    int m2[3];
    int x = 0;
    int y = 0;
    int m = 0;
    while (!file.eof())
    {
        if (file.eof())
            break;
        file >> s;
        x = create_digit(s);
        file >> s;
        y = create_digit(s);
        file >> s;
        m = create_digit(s);
        if ((m * (x + y) > max1))
        {
            m2[0] = m1[0];
            m2[1] = m1[1];
            m2[2] = m1[2];
            m1[0] = x;
            m1[1] = y;
            m1[2] = m;
            max2 = max1;
            max1 = (m * (x + y));
        }
    }
    file.close();
    std::cout << "First (m*(x+y)) = " << max1 << ". Points: [" << m1[0] << ", " << m1[1] << ", " << m1[2] << "]\n";
    std::cout << "Second (m*(x+y)) = " << max2 << ". Points: [" << m2[0] << ", " << m2[1] << ", " << m2[2] << "]\n";
}
