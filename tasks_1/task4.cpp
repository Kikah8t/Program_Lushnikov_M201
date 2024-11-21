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

    cout << "Исходный массив:     ";
    for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        cout << *it << " ";
    }

    it = rand_array.end();
    int before = 0;
    for (size_t i = 0; i < num_array/2; i++)
    {        
        before = rand_array[i]; 
        --it;        
        rand_array[i] = *it;
        *it = before;
        
    }

    cout << "\nПеревернутый массив: ";
    for (it = rand_array.begin(); it < rand_array.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}