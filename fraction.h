#pragma once

class fraction {
private:
    double _numerator;
    double _denominator;
public:
    fraction(double numerator, double denominator) {
        _numerator = numerator;
        _denominator = denominator;
    }

    void GetSumm(); // Сумма

    void GetDiff(); // Разность

    void GetDiv();  // Деление
    
    void GetMult();  // Умножение
        
    void GetDiffRev(); // Обратная разность
        
    void GetDivRev(); // Обратное деление


};
