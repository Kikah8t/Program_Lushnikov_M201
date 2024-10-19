#include <iostream>

void Foo(int* x);

using namespace std;
int main()
{
    int num;
    cout << "Введите число: ";
    cin >> num;

    int* pnum = &num;
    Foo(pnum);
    cout << "\n" << num;
    return 0;
}

void Foo(int* x)
{
    *x += 10;
    cout << *x;
}