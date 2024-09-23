#include <iostream>
#include <ctime>
#include <vector>
#include <stdio.h>
#include <random>

int rand (void);

using namespace std;
int main()
{
    srand(time(0));
    vector <int> rand_array;
    vector<int>::iterator it1;
    vector<int>::iterator it2;

    int num_array;
    printf("Введите кол-во элементов массива: ");
    scanf("%d", &num_array);
    

    for (int32_t i; i < num_array; i++)
    {
        rand_array.push_back(rand() % 100);
    }

    cout << "Исходный массив: ";
    for (it1 = rand_array.begin(); it1 < rand_array.end(); it1++)
    {
        cout << *it1 << " ";
    }

    for(it1 = rand_array.begin(); it1 < rand_array.end(); it1++)
    {
        int clock = *it1;
        for(it2 = it1+1; it2 < rand_array.end(); it2++)
        {
            if(*it2 < *it1 )
            {
                *it1 = *it2;
                *it2 = clock;
                clock = *it1;
            }
        }
    }

    cout << "\nОтсортированный массив: ";
     for (it1 = rand_array.begin(); it1 < rand_array.end(); it1++)
    {
        cout << *it1 << " ";
    }

    return 0;
}