#pragma once

class fraction {
private:
    double _numerator;
    double _denominator;
public:
    fraction(double numerator, double denominator);

    void GetSumm(); // Сумма

    void GetDiff(); // Разность

    void GetDiv();  // Дробное деление
    
    void GetDivF();  // Целочисленное деление
     
    void GetMult();  // Умножение
        
    void GetDiffRev(); // Обратная разность
        
    void GetDivRev(); // Обратное деление

    void GetDivRevF(); // Обратное целочисленное деление


};
