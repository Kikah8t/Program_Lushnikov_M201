#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector <int>& Fill_mass(int x, int y); // Заполнение массива диапазоном чисел
void Print_Mass(vector <int> mass); // Вывод диапазона в консоль
vector <int>& Simple_Mass(std::vector <int> mass); // Поиск простых чисел в массиве

int main()
{

    cout << "Введите диапазон от A до B: ";   
    int A, B;
    cin >> A >> B;

    
    vector <int> diap = Fill_mass(A, B);
    Print_Mass(diap);
    vector <int> simple_diap = Simple_Mass(diap);

    cout << "Вывод всех простых чисел диапазона: ";

    Print_Mass(simple_diap);
    return 0;
}

// Заполнение массива диапазоном чисел
vector <int>&  Fill_mass(int x, int y)
{
    static vector <int> mass;
    int size = y - x;
    for (size_t i = 0; i <= size; ++i)
    {
        mass.push_back(x++);
    }
    return mass;
};

// Поиск простых чисел в массиве
vector <int>& Simple_Mass(std::vector <int> mass)
{
    vector <int>:: iterator itt;
    static vector <int> simple_mass;
    for (itt = mass.begin(); itt < mass.end(); ++itt)
    {
        bool trig = 0;
        for (int i = 2; i < *itt; ++i)
        {
            if (*itt % i == 0)
            {
                trig = 1;
            }
        }

        if (trig or *itt == 1 or *itt == 0)
        {
            continue;
        } else
            {
                simple_mass.push_back(*itt);   
            }

    }
    
    return simple_mass;
};

// Вывод диапазона в консоль
void Print_Mass(std::vector <int> mass)
{
    vector <int>:: iterator itt;

    for (itt = mass.begin(); itt < mass.end(); ++itt)
    {
        
        cout << *itt << " ";
    }
    cout << "\n";
}