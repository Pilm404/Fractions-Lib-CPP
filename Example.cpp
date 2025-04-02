#include "FractionLib.h"

int main()
{
	Fraction::fraction f1{ 2, 10 }, f2{ 10,5 };
	Fraction::Math::Sum(f1, f2).PrintFraction();
	Fraction::Math::Minus(f1, f2).PrintFraction();
	Fraction::Math::Multiply(f1, f2).PrintFraction();
	Fraction::Math::Divide(f1, f2).PrintFraction();
	//Fraction::Math::Divide(f1, f2).PrintFraction();
}