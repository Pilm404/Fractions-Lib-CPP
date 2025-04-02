#include "FractionLib.h"
#include <iostream>

int main()
{
	//Create fraction variable
	Fraction::fraction f1, f2, f3;
	
	//Set fraction values
	f1.SetValues(2, 10);
	f2.SetValues(10, 5);

	//Copy values to new variable
	Fraction::CopyValues(f2, f3);

	//Equalizing fractions
	f3.Coup();

	//Simplify a fraction
	f3.Simplify();

	//Print fraction data
	std::cout << "Printing test:\n";
	f1.PrintFraction();
	f2.PrintFraction();

	//Math operations
	std::cout << "Math operations test:\n";
	Fraction::Math::Sum(f1, f2).PrintFraction();
	Fraction::Math::Minus(f1, f2).PrintFraction();
	Fraction::Math::Multiply(f1, f2).PrintFraction();
	Fraction::Math::Divide(f1, f2).PrintFraction();

	//Equalize the denominators
	EqualizeTheDenominators(f3, f2);
	std::cout << "Equalize the denominators test:\n";
	f3.PrintFraction();
	f2.PrintFraction();
}