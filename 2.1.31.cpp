#include <iostream>
#include <time.h>
int index_positive_first(int** mat, int n, int m)//пошук першого рядка в матриці з усіма позитивними елементами в рядку
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] <= 0)
                flag = false;
        }
        if (flag == true)
        {
            index = i;
            break;
        }
    }
    return index;
}

int index_positive_last(int** mat, int n, int m)//пошук останнього рядка в матриці з усіма позитивними елементами
{
    int index = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        bool flag = true;
        for (int j = m - 1; j >= 0; j--)
        {
            if (mat[i][j] <= 0)
                flag = false;
        }
        if (flag == true)
        {
            index = i;
            break;
        }
    }
    return index;
}

int** swap_matrix(int** mat, int n, int m)//перевертання
{
    int first = index_positive_first(mat, n, m);
    int last = index_positive_last(mat, n, m);
    if (first == last)
        std::cout << "There only one column of the matrix has positive numbers\n";
    else if (first == last == -1)
        std::cout << "There no one column of the matrix has positive numbers\n";
    else
    {
        int* tmp = new int[m];
        for (int i = 0; i < m; i++)
            tmp[i] = mat[first][i];
        for (int i = 0; i < m; i++)
            mat[first][i] = mat[last][i];
        for (int i = 0; i < m; i++)
            mat[last][i] = tmp[i];
        delete[] tmp;
    }
    return mat;
}

void print_matrix(int** mat, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "[ ";
        for (int j = 0; j < m; j++)
            std::cout << mat[i][j] << " ";
        std::cout << "]\n";
    }
}
int** create_matrix(int** mat, int n, int m)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            mat[i][j] = rand()%50 - rand()%30;
    }
    return mat;
}

int main()
{
    int m = 2;
    int n = 10;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    matrix = create_matrix(matrix, n, m);
    print_matrix(matrix, n, m);
    std::cout << "----------------S W A P--------------------\n";
    matrix = swap_matrix(matrix, n, m);
    print_matrix(matrix, n, m);
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;
}

