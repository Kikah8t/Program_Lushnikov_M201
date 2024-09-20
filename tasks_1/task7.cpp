#include <iostream>
#include <stdio.h>

bool Check_Znack(int*m, int n); // Функция проверяющая на знакочередуемость 
std::pair <bool, int> Check_Same_Num(int*m, int n); // Функция проверяющая на одинаковость элементов 
bool Check_Decreese(int*m, int n); // Функция проверяющая на убывание
void OutPut(bool t, std::pair <bool,int> p, bool m); // Функция вывода задачи

int main()
{
   int num_array = 0;
   std::cout << "Введите кол-во эллемнтов массива: ";
   while (std::cin >> num_array) // Проверка на умника
   {
     
     if (num_array<=0 or num_array - 1 == 0)
     {
         std::cout << "Введите значение больше 0 или 1!" << std::endl << "Попробуй еще раз: ";
         num_array = 0;
     } 
     else {break;}
   }

   printf("Введите массив размерностью %d: ", num_array,"\n");
   int check_array[num_array];
   for(int i = 0; i < num_array; i++)
   {
        std::cin >> check_array[i];
   }
   
   bool task_array_znack = Check_Znack(check_array,num_array);
   std::pair <bool,int> task_same= Check_Same_Num(check_array,num_array);
   bool task_Decrese = Check_Decreese(check_array,num_array);
   
   OutPut(task_array_znack, task_same, task_Decrese);   
    return 0;
}

bool Check_Znack(int* m, int n)
{
    bool pin = 1;    
    //Проверяю массив на знакочередуемость и на наличие нуля
    for (int i = 0; i < n-1; i++)
    {
    
        if (m[i] > 0 and m[i+1]<0 or m[i] < 0 and m[i+1] > 0)
        {
            continue;
        }
        else
        {
            pin = 0;
            break;
        }  
           
    }   

    return pin;   
};

std::pair <bool, int> Check_Same_Num(int*m, int n)
{
    bool pin = 0;
    int clock = 1;    
    //Проверяю массив на одинаковые элементы
    for (int i = 0; i < n-1; i++)
    {   
        if (m[i] == m[i+1])
        {
            clock++;
        }
                  
    }
    if (clock-1)
    {
        pin = 1;        
    }
    return std::pair <bool, int> (pin, clock);  
};

bool Check_Decreese(int*m, int n)
{
    bool pin = 1;        
    for (int i = 0; i < n-1; i++)
    {
    
        if (m[i] <= m[i+1])
        {
            continue;
        }
        else
        {
            pin = 0;
            break;
        }  
           
    }   

    return pin;
};

void OutPut(bool t, std::pair <bool,int> p, bool m)
{
    std::cout << "Оценка массива:\n";
    if (t == true)
    {
        std::cout << "1) Последовательность знакочередующаяся;\n";
    } else
        {
            std::cout << "1) Последовательность незнакочередующаяся;\n";
        }
    if (p.first == true)
    {
        printf("2) Последовательность содержит %d одинаковых элемента\n;", p.second);
    } else
        {
            std::cout << "2) Последовательность несодержит одинаковых элементов;\n";
        }
    if (m == true)
    {
        std::cout << "3) Последовательность неубывающая;\n";
    } else
        {
            std::cout << "3) Последовательность убывающая;\n";
        }
}