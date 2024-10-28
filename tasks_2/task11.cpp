#include <iostream>
#include <cmath>
struct Point3D
{
    double X;
    double Y;
    double Z;
};

double Distance(Point3D &a, Point3D &b);

using namespace std;
int main()
{
    Point3D point_1 = {0, 0, 0};
    Point3D point_2 = {0, 0, 1};

    cout << "Расстояние между точками: " << Distance(point_1, point_2);
    return 0;
}

double Distance(Point3D &a, Point3D &b)
{
    return sqrt((a.X - b.Y)*(a.X - b.Y)* + (a.Y-b.Y)*(a.Y-b.Y) + (a.Z-b.Z)*(a.Z-b.Z));
}



/*  Создайте структуру Point3D для представления точки в трехмерном пространстве.
Напишите функцию, которая принимает две точки по ссылке и возвращает расстояние между ними.*/