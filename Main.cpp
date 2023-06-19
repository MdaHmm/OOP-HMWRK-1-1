#include <iostream>
#include "fraction.h"

int main() {
    setlocale(LC_ALL, "Russian");

    /*
     Задача 1.
     Взять класс дробь и дополнить его унарными операторами
     - ++
     - -- 
     - - 
     - +

     обратить внимание на конструкторы класса и те, которые представляются
     нужными, отметить как explicit

     добваить методы:
        - получения целой части от дроби
        - получение дробной части от дроби
        - нормализация дроби(уменьшение знаменателя до возможного минимума)
        - получение обратной дроби

     */
    std::cout << "Задача 1.\nДроби.\n";

    fraction fr1(5, 10);
    fraction fr2(30, 6);
    fr1.GetDiv();
    fr1.GetDivRev();
    std::cout << std::endl;
    fr1.GetDivF();
    fr1.GetDivRevF();
  
    std::cout << std::endl;

    fr2.GetDiv();
    fr2.GetDivRev();
    std::cout << std::endl;
    fr2.GetDivF();
    fr2.GetDivRevF();

    return 0;
}
