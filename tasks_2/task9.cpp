#include <iostream>

struct Rectangle
{
    double width = 10;
    double length = 10;
};

void Change_Param(Rectangle* x);

using namespace std;
int main()
{
    Rectangle My_rect;
    Rectangle* pMy_rect = &My_rect;
    Change_Param(pMy_rect);
    cout << "Значение длины и ширины: " << pMy_rect->length << " " << pMy_rect->width;
    
    return 0;
}

void Change_Param(Rectangle* x)
{
    {
    do {
        cout << "Введите значение длины (положительное число): ";
        cin >> x->length;
    } while (x->length <= 0);

    do {
        cout << "Введите значение ширины (положительное число): ";
        cin >> x->width;
    } while (x->width <= 0);
}
}