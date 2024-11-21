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
    vector <int> local_max_array;
    std::vector<int>::iterator it;

    int num_array;
    printf("Введите кол-во элементов массива: ");
    scanf("%d", &num_array);
    

    for (int32_t i; i < num_array; i++)
    {
        rand_array.push_back(rand() % 100);
    }

   int clock = 0; 
   for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        
        if ( rand_array.size() > 1 and clock == 0 and *it > *(it+1))
        {
            local_max_array.push_back(0); //Первый элемент локальный максимум
        }
        
        if ( clock == num_array-1 and *it < *(it+1))
        {
            local_max_array.push_back(num_array); //Последний элемент локальный максимум
            break;
        }

        if (clock > 0)
        {
            if (*(it-1) < *it and *it > *(it+1))
            {
                 local_max_array.push_back(clock); //Ищем лок. максимумы внутри массива
            }
        }   
        clock++;     
    }

    cout << "Исходный массив: ";
    for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        cout << *it << "  ";
        if (*it < 10)
        {
            cout << "\b  \b";
        }
        if (distance(rand_array.begin(),it) >= 9)
        {
            cout << " ";
        }
    }
    cout <<"\v\t\t";
    for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        cout << "[" << distance(rand_array.begin(),it) << "] ";
        
    }
    if (local_max_array.empty() == true)
    {
        cout << "\nЛокальных максимумов нет или массив содержит один элемент";
    } else
        {                        
            cout << "\n\nИндексы локальных максимумов: ";
            for (it = local_max_array.begin(); it < local_max_array.end(); it++)
            {
                cout << "[" << *it << "] ";
            }
        }
   return 0;
}