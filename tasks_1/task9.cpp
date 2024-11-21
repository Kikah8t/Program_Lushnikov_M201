#include <iostream>
#include <random>
#include <ctime>

int rand (void);

using namespace std;
int main()
{
    srand(time(0));
    int N;
    cout << "Введите размерность N двумерного массива: ";
    cin >> N;
    int array_ [N][N];

    for (size_t i = 0; i < N; i++)
    {
        for (size_t q = 0; q < N; q++)
        {
            array_ [i][q] = rand() % 2;
        }
    }

    cout << "Исходный массив: \n";

    // Вывод массива
    for (size_t i = 0; i < N; i++)
    {
        for (size_t q = 0; q < N; q++)
        {
            cout << array_ [i][q] << " ";
        }
        cout << endl;
    }

    int check_diag = 1;
    for (size_t i = 0; i < N -1 ; i++)
    {
        if(array_ [i][i] == array_ [i+1][i+1])
        {
            check_diag++;
        }
    }

    if (check_diag == N)
    {
        cout << "Матрица симметричная";
    }
    else
    {
        cout << "Матрица несимметричная";
    }

    return 0;
}