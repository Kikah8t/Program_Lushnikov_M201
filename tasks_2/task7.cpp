#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int rand();

void Print_Mass(int** mass_, int x, int y); // Вывод матрицы в консоль
int** Rand_Fill_Mass(int x, int y); // Заполнение матрицы случайными числами
int** Sort_Mass(int** mass_, int x, int y); // Сортировка массива по возрастанию
void Delete_Mass(int** mass_, int y); // Удаление массива
 
int main()
{
    srand(time(0));
    
    int n, m;
    cout << "Введите размер матрицы n x m: ";
    cin >> n >> m;

    // Обработка
    int** mass_user_rand = Rand_Fill_Mass(n, m);
    
    Print_Mass(mass_user_rand, n, m);
    int** sort_mass = Sort_Mass(mass_user_rand, n, m);
    Print_Mass(sort_mass, n, m);

    Delete_Mass(mass_user_rand, m);
    return 0;
    
}

int** Rand_Fill_Mass(int x, int y)
{

    int** mass = new int* [x]; 
    for (size_t i = 0; i < x; i++)
    {
        mass[i] = new int [y];
    }

    for (size_t i = 0; i < x; i++)
    {
        for (size_t q = 0; q < y; q++)
        {
            mass [i][q] = rand() % 10;
        }
    }
    return mass;

};

void Delete_Mass(int** mass_, int y)
{
    for(size_t i = 0; i < y; i++)
    {
        delete [] mass_[i];
    }

    delete [] mass_;
};

int** Sort_Mass(int** mass_, int x, int y)
{
    int sort_mass [x*y];
    int index = 0;
    for(size_t i = 0; i < x; i++)
        {
            for(size_t q = 0; q < y; q++)
            {
                sort_mass[index++] = mass_[i][q];
            }
        }

    for(size_t p = 0; p < x*y; p++)
    {
        int max = sort_mass[p];
        for(size_t i = p + 1; i < x*y; i++)
        {
            if (sort_mass[p] > sort_mass[i])
            {
                sort_mass[p] = sort_mass[i];
                sort_mass[i] = max;
                max =  sort_mass[p];
                
            }
        }
    }

   index = 0; 
   for(size_t i = 0; i < x; i++)
        {
            for(size_t q = 0; q < y; q++)
            {
                mass_[i][q] = sort_mass[index++];
            }
        }
    
    return mass_;         
};

void Print_Mass(int** mass_, int x, int y)
{
    cout << "\n";
    for (size_t i = 0; i < x; i++)
    {
        for (size_t q = 0; q < y; q++)
        {
            cout << mass_[i][q] << " ";
        }

        cout << "\n";
    }
}
