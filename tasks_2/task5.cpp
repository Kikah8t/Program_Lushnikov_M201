#include <iostream>

void Swap(int x, int y);

using namespace std;
int main()
{
    int num_1;
    int num_2;
    cout << "Введите два числа: ";
    cin >> num_1 >> num_2;
    
    Swap(num_1, num_2);
    cout << "Результат: " << num_1 << " " << num_2;
    return 0;
}

void Swap(int x, int y)
{
    
    int copy = x;
    x = y;
    y = copy;

}