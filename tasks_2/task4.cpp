#include <iostream>

double pow(double x, int y);

using namespace std;
int main()
{
    double num;
    int atep;
    cout << "Введите число и степень: ";
    cin >> num >> atep;
    

    cout << "Результат: " << pow(num, atep);
    return 0;
}

double pow(double x, int y)
{
    int result = x;
    for (int i = 1; i < y; i++ )
    {
        result *= x;
    }

    return result;
}