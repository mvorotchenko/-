#include <iostream>
#include <time.h>

int** create_matrix(int** mat, int n, int m)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            mat[i][j] = rand() % 50 - rand() % 30;
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

int get_max(int** mat, int n, int m)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }
    return max;
}

int* get_new_array(int* arr, int* get_arr, int N)
{
    for (int i = 0; i < N; i++)
        get_arr[i] = arr[i];
    return get_arr;
}

int** get_new_matrix(int** mat, int n, int m)
{
    int n_index = 0;
    int m_index = 0;
    int search = 0;
    int min_module = get_max(mat, n , m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            search = abs(mat[i][j]);
            if (search < min_module)
            {
                n_index = i;
                m_index = j;
                min_module = search;
            }
        }
    }
    int** matrix = new int* [n + 1];
    for (int i = 0; i < n + 1; i++)
        matrix[i] = new int[m];
    for (int i = 0; i < n + 1; i++)
    {
        if (i == n_index + 1)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == m_index)
                    matrix[i][j] = rand() % 50 - rand() % 30;
                else
                    matrix[i][j] = 0;
            }
            for (int k = i + 1; k < n + 1; k++)
            {
                for (int d = 0; d < m; d++)
                    matrix[k][d] = mat[k - 1][d];
            }
            break;
        }
        else
        {
            for (int f = 0; f < m; f++)
                matrix[i][f] = mat[i][f];
        }
    }
    for (int i = 0; i < n; i++)
        delete[] mat[i];
    delete[] mat;
    return matrix;
}

int main()
{
    int m = 4;
    int n = 10;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    matrix = create_matrix(matrix, n, m);
    print_matrix(matrix, n, m);

    int** matrix1 = new int* [n + 1];
    for (int i = 0; i < n + 1; i++)
        matrix1[i] = new int[m];
    matrix1 = get_new_matrix(matrix, n, m);
    std::cout << "---------------NEW MATRIX-----------------\n";
    print_matrix(matrix1, n + 1, m);

    for (int i = 0; i < n; i++)
        delete[] matrix1[i];
    delete[] matrix1;
    return 0;
}