#include <iostream>

// Функция суммы
double Sum_Num(double x, double y);

//Функция разности
double Diff_Num(double x, double y);

//Функция умножения
double Mult_Num(double x, double y);

//Функция деления
double Div_Num(double x, double y);

using namespace std;
int main()
{
    cout << "Введите два числа: ";
    double num_1, num_2;
    cin >> num_1 >> num_2;

    cout << "Сложение: " << Sum_Num(num_1, num_2) << "\n";
    cout << "Разность: " << Diff_Num(num_1, num_2) << "\n";
    cout << "Умножение: " << Mult_Num(num_1, num_2) << "\n";
    cout << "Отношение: " << Diff_Num(num_1, num_2) << "\n";

}

double Sum_Num(double x, double y)
{
    return x + y;
};

double Diff_Num(double x, double y)
{
    return x - y;
};

double Mult_Num(double x, double y)
{
    return x * y;
};

double Div_Num(double x, double y)
{
    return x / y;
};