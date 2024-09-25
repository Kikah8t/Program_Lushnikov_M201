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
    std::vector<int>::iterator it;

    int num_array;
    printf("Введите кол-во элементов массива: ");
    scanf("%d", &num_array);

    for (int i = 0; i < num_array; i++)
    {
        rand_array.push_back(rand() % 100);
    }

    int max_joy = 0;    
    int itter = 0;  

    for (int i = 0; i < num_array; i++)
    {
        if (rand_array[i] >= max_joy)
        {
            max_joy = rand_array[i]; 
            itter = i;
        }

    }

    for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\nИндекс масимального числа " << max_joy << " - " << itter;
    
    return 0;
}