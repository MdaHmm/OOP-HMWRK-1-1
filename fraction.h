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

    void GetSumm(); // �����

    void GetDiff(); // ��������

    void GetDiv();  // �������
    
    void GetMult();  // ���������
        
    void GetDiffRev(); // �������� ��������
        
    void GetDivRev(); // �������� �������


};
