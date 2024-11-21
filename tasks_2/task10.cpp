#include <iostream>

struct Book
{
    std::string name;
    std::string autor;
    int year;
};

int Number_Book (Book* x, std::string y);

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    Book library [5];
    library[0] = {"Триумфальная арка", "Ремарк Э.М.", 1945};
    library[1] = {"Снафф", "Чак Паланик", 1995};
    library[2] = {"Фактотум", "Чарльз Буковски", 1975};
    library[3] = {"Двадцать тысяч льё под водой", "Жюль Верн", 1870};
    library[4] = {"Приключения Тома Сойера", "Марк Твен", 1876};

    string name_b;
    cout << "Введите название книги: ";
    getline(cin,name_b);

    int number_b = Number_Book (library, name_b);
    if (number_b != -1)
    {
        cout << "Книга найдена в массиве под номером: " << number_b;
    } else
        {
            cout << "Книга не найдена";
        }
    
    return 0;
}

int Number_Book (Book* x, string y)
{
    int number = -1;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].name == y)
        {
            number = i+1;
        }
    }
    return number;
}

/* Определить структуры Book, содержащую название книги, автора, год издания.
Создать массив из нескольких книг и написать функцию, которая принимает массив и название книги
и возвращает номер книги в массиве. Если книга не обнаружена - возвращает -1.*/