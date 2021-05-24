#include <iostream>

int get_size(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char* remove_symbols(char* A, char S, char C)
{
    int size = get_size(A);
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (A[i] == S)
        {
            for (int j = i + 1; j < size; j++)
                A[j] = C;
            flag = true;
            break;
        }
    }
    if (flag == false)
        std::cout << "No such symbol(S)\n";
    return A;
}

int main()
{
    char A[13] = "ABCDEFGERTGH";
    char S[2] = "G";
    char C[2] = "1";
    char* a;
    a = remove_symbols(A, S[0], C[0]);
    std::cout << a;
}