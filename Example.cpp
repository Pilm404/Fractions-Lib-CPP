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
	f1.PrintFraction(Fraction::ALL);
	f1.PrintFraction(Fraction::NUMERATOR);
	f1.PrintFraction(Fraction::DENOMINATOR);

	//Math operations
	std::cout << "Math operations test:\n";
	Fraction::Math::Sum(f1, f2).PrintFraction(Fraction::ALL);
	Fraction::Math::Minus(f1, f2).PrintFraction(Fraction::ALL);
	Fraction::Math::Multiply(f1, f2).PrintFraction(Fraction::ALL);
	Fraction::Math::Divide(f1, f2).PrintFraction(Fraction::ALL);

	//Equalize the denominators
	Fraction::EqualizeTheDenominators(f3, f2);
	std::cout << "Equalize the denominators test:\n";
	f3.PrintFraction(Fraction::ALL);
	f2.PrintFraction(Fraction::ALL);

	//Comparison operations
	Fraction::Comparison::Max(f1, f2).PrintFraction(Fraction::ALL);
	Fraction::Comparison::Min(f1, f2).PrintFraction(Fraction::ALL);
	//or
	Fraction::COMPARISONSTATUS status = Fraction::Comparison::Comparison(f1, f2);
	switch (status)
	{
	case Fraction::EQUALS:
		std::cout << "EQUALS";
	case Fraction::GREATER:
		std::cout << "GREATER";
	case Fraction::LESS:
		std::cout << "LESS";
	default:
		break;
	}
	std::cout << std::endl;

	//Get fraction parts
	std::cout << "Numerator: " << f3.GetFraction(Fraction::NUMERATOR) << std::endl;
	//or
	std::cout << "Numerator: " << f3.numerator << std::endl;

	//Answer for fraction
	std::cout << "Fraction result: " << f3.GetAnswer() << std::endl;
}