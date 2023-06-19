#include <iostream>
#include "fraction.h"

void fraction::GetSumm()
{
	std::cout << _numerator << " + " << _denominator << " = " << _numerator + _denominator << std::endl;
}

void fraction::GetDiff()
{
	std::cout << _numerator << " - " << _denominator << " = " << _numerator - _denominator << std::endl;
}

void fraction::GetDiv()
{
	std::cout << _numerator << " / " << _denominator << " = " << _numerator / _denominator << std::endl;
}

void fraction::GetMult()
{
	std::cout << _numerator << " * " << _denominator << " = " << _numerator * _denominator << std::endl;
}

void fraction::GetDiffRev()
{
	std::cout << _denominator << " - " << _numerator << " = " << _denominator - _numerator << std::endl;
}

void fraction::GetDivRev()
{
	std::cout << _denominator << " / " << _numerator << " = " << _denominator / _numerator << std::endl;
}


