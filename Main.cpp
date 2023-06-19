#include <iostream>
#include "fraction.h"

int main() {
    setlocale(LC_ALL, "Russian");

    // Задача 1.

    std::cout << "Задача 1.\nДроби.\n";

    fraction fr1(5, 10);
    fraction fr2(30, 6);
    fr1.GetSumm();
    fr1.GetDiff();
    fr1.GetDiv();
    fr1.GetMult();
    fr1.GetDivRev();
    fr1.GetDiffRev();
    std::cout << std::endl;
    fr2.GetSumm();
    fr2.GetDiff();
    fr2.GetDiv();
    fr2.GetMult();
    fr2.GetDivRev();
    fr2.GetDiffRev();


    return 0;
}
