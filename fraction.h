#pragma once

class fraction {
private:
    double _numerator;
    double _denominator;
public:
    fraction(double numerator, double denominator);

    void GetSumm(); // �����

    void GetDiff(); // ��������

    void GetDiv();  // ������� �������
    
    void GetDivF();  // ������������� �������
     
    void GetMult();  // ���������
        
    void GetDiffRev(); // �������� ��������
        
    void GetDivRev(); // �������� �������

    void GetDivRevF(); // �������� ������������� �������


};
