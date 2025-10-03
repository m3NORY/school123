/*
1) Арифметическая операция — это действие над числами (операндами), результатом которого является новое число.
Основные операции: 
Сложение: a+b
Вычитание: a-b
Умножение: a*b
Деление: a/b
Остаток от деления: a%b

Унарные операции:
+ a - без изменений
- a - меняет знак

Инкремент:
++a , a++ - увеличение на единицу
--a , a-- - уменьшение на единицу

2)целочисленные типы выполняют операции в целых числах, в то время как вещественные типы позволяют хранить дробную часть

3) скобки -> унарные -> умножение, деление ... -> сложение и вычитание



*/


#include <iostream>

int main()
{
    /* 
    int a = 12;
    int b = 5;
    std::cout << a/b << std::endl;

    double a1 = 12;
    double b1 = 5;
    std::cout << a1/b1 << std::endl;

    int a2 = 12;
    double b2 = 5;
    std::cout << a2/b2 << std::endl;

    int a3 = 12;
    int b3 = 5;
    std::cout << a3/b3 << std::endl;

    */

    /*
    int r = 5+2*8;
    std::cout << r << std::endl;

    int re = (5+2)*8;
    std::cout << re << std::endl;

    int res = 75 + 60 * 14 - 9;
    std::cout << res << std::endl;

    int resu = (75 + 60) * (14 - 9);
    std::cout << resu << std::endl;

    int resul = -7 + 3;
    std::cout << resul << std::endl;

*/

/* 

// float , double хранятся в двоичной форме
// не все десятичные дроби можно точно представить в двоичной системе
    double a = 0.1;
    double b = 0.4;
    double c = a+b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    if (c = 0.5 )
        std::cout << 'yes' << std::endl;
    else
        std::cout << 'no' << std::endl;


    double erd = 0.00001;
    if (abs(c - 0.5) < erd)
    std::cout << 'c~' << std::endl;
return 0;

// 1. использовать double, вместо float
// 2. long double высокая точность 
*/

unsigned short int A;
std::cin >> A;
if (A > 0) {
    if (A < 40) {
        std::cout << A*A*A << std::endl; 
    }
}
else {
    std::cout << 0 << std::endl;
}
return 0;

}