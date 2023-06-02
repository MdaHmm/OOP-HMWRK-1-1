#include <iostream>

class fraction {
private:
    double _numerator;
    double _denominator;
public:
    fraction(double numerator, double denominator) {
        _numerator = numerator;
        _denominator = denominator;
    }

    void GetSumm() { // Сумма
        std::cout << _numerator << " + " << _denominator << " = " << _numerator + _denominator << std::endl;
    }

    void GetDiff() { // Разность
        std::cout << _numerator << " - " << _denominator << " = " << _numerator - _denominator << std::endl;
    }

    void GetDiv() { // Деление
        std::cout << _numerator << " / " << _denominator << " = " << _numerator / _denominator << std::endl;
    }

    void GetMult() { // Умножение
        std::cout << _numerator << " * " << _denominator << " = " << _numerator * _denominator << std::endl;
    }

    void GetDiffRev() { // Обратная разность
        std::cout << _denominator << " - " << _numerator << " = " << _denominator - _numerator << std::endl;
    }
    void GetDivRev() { // Обратное деление
        std::cout << _denominator << " / " << _numerator << " = " << _denominator / _numerator << std::endl;
    }

};


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
