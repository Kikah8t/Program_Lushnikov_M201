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
            array_ [i][q] = rand() % 3;
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

    // Проверка строки
    int point_zero_str1 = 0;
    int point_zero_str2 = 0;
    int point_str = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t q = 0; q < N; q++)
        {
            if (array_ [i][q] == 0)
            {
                point_zero_str1++;
            }
        }
        
        if (point_zero_str1 > point_zero_str2)
        {
            point_zero_str2 =  point_zero_str1;
            point_str = i;            
        }
        else if (point_zero_str1 == point_zero_str2)
        {
            point_str = 0;
        }
        point_zero_str1 = 0;
    }

    if (point_str)
    {
    cout << "Номер строки с наибольшим количеством нулей: " << point_str + 1;
    } 
    else
    {
        cout << "В массиве нет строки с наибольшим количеством нулей";
    }

    return 0;
}