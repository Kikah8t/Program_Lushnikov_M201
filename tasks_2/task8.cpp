#include <iostream>

struct Student
{
    std::string Name;
    int age;
    double middle_mark;
};

void Print_Info(Student x);

using namespace std;
int main()
{
    Student Me;
    Me.Name = "NIKITA";
    Me.age = 23;
    Me.middle_mark = 2.5;
    Print_Info(Me);
    return 0;
}

void Print_Info(Student x)
{
    Student my_stud;
    cout << "Имя студента: " << x.Name << "\n";
    cout << "Возраст студента: " << x.age << "\n";
    cout << "Возраст студента: " << x.middle_mark << "\n";
     
}