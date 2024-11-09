#include <iostream>

struct Student
{
    std::string Name;
    int age;
    double middle_mark;
};

void Print_Info(Student x, int size);
void Sort_Student_Mass(Student* mass_student, int size);
void Print_Student_Mass_Mark(Student* mass_student, int size);

using namespace std;
int main()
{
    Student tip_1 = {"Nik", 2001, 2.5};
    Student tip_2  = {"Lesha", 2001, 4.5};
    Student tip_3 = {"Oleg", 1999, 3.8};
    Student tip_4 = {"Bogdan", 2000, 4.8};

    Student mass_stud[ ] = {tip_1, tip_2, tip_3, tip_4};
    int size_ = sizeof(mass_stud)/sizeof(Student);
    
    
    Sort_Student_Mass(mass_stud, size_);
    Print_Student_Mass_Mark(mass_stud, size_);
    //Print_Info();
    return 0;
}

void Print_Info(Student x)
{
    Student my_stud;
    cout << "Имя студента: " << x.Name << "\n";
    cout << "Возраст студента: " << x.age << "\n";
    cout << "Возраст студента: " << x.middle_mark << "\n";
     
}

//Сортировка массива по оценке
void Sort_Student_Mass(Student* mass_student, int size)
{
    Student point_sudent;
    for(size_t i = 0; i < size-1; i++)
    {
        point_sudent = mass_student[i];

        if(mass_student[i].middle_mark > mass_student[i+1].middle_mark)
        {
            mass_student[i] =  mass_student[i+1];
            mass_student[i+1] = point_sudent;
        }
    }
}

void Print_Student_Mass_Mark(Student* mass_student, int size)
{
    cout << "Отсортированный табель успеваемости: " << "\n";

    for(size_t i = 0; i < size; i++)
    {
        cout << "Имя студента: " << mass_student[i].Name << "\t"  << "Оценка: " << mass_student[i].middle_mark << "\n";
    }
}
/*  Напишите функцию сортировки массива из структур из Task8 по среднему баллу.  
Создайте структуру Student, которая содержит поля: имя, возраст, средний балл.
Напишите функцию, которая принимает объект этой структуры и выводит информацию о студенте на экран.*/