#include <iostream>

int Foo_fact(int x);

using namespace std;
int main()
{
    int num;
    cout << "Введите факториал: ";
    cin >> num;

    cout << "Факториал " << num << "! равен: " << Foo_fact(num);
    return 0;
}

int Foo_fact(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++ )
    {
        result *= i;
    }

    return result;
}