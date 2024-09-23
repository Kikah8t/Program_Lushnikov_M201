#include <iostream>
#include <ctime>
#include <vector>
#include <stdio.h>
#include <random>
#include <cmath>

int rand (void);

using namespace std;
int main()
{
    srand(time(0));
    vector <int> rand_array;
    vector<int>::iterator it1;

    int num_array;
    printf("Введите кол-во элементов массива: ");
    scanf("%d", &num_array);
    

    for (int32_t i; i < num_array; i++)
    {
        rand_array.push_back(rand() % 10);
    }

    cout << "Исходный массив: ";
    for (it1 = rand_array.begin(); it1 < rand_array.end(); it1++)
    {
        cout << *it1 << " ";
    }

    double M_x = 0;
    double M_x_2 = 0;    
    for (it1 = rand_array.begin(); it1 < rand_array.end(); it1++)
    {
        M_x += *it1 * (1/double(num_array));
        M_x_2 += pow(*it1,2) * (1/double(num_array));
    }

    double G_x = sqrt(M_x_2 - pow(M_x,2));
    cout << "\nМатематическое ожидание последовательности: " << M_x;
    cout << "\nСтандартое отклонение элементов: " << G_x;
    return 0;
}