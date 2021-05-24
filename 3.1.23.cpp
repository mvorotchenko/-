#include <iostream>

int get_size(char* s)
{
    int k = 0;
    while (s[k] != '\0')
        k++;
    return k;
}


void max_symbol(char* s)
{
    int max = 0;
    char result[1];
    int size = get_size(s);
    for (int i = 0; i < size; i++)
    {
        int summ = 0;
        char symbol = s[i];
        for (int j = 0; j < size; j++)
        {
            if (symbol == s[j])
                summ++;
        }
        if (summ > max)
        {
            max = summ;
            result[0] = symbol;
        }
    }
    std::cout << "Max symbol: " << result[0] << ". Number of repetitions: " << max << "\n";
}

void min_symbol(char* s)
{
    int size = get_size(s);
    int min = size;
    char result[1];
    for (int i = 0; i < size; i++)
    {
        char symbol = s[i];
        int summ = 0;
        for (int j = 0; j < size; j++)
        {
            if (symbol == s[j])
                summ++;
        }
        if (summ < min)
        {
            min = summ;
            result[0] = symbol;
        }
    }
    std::cout << "Min symbol: " << result[0] << ". Number of repetitions: " << min << "\n";
}

int main()
{
    char str[50];
    std::cout << "Enter your string: ";
    std::cin >> str;
    std::cout << str;
    max_symbol(str);
    min_symbol(str);
}