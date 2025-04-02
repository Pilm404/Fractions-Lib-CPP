#pragma once

#include <iostream>
#include <cmath>


namespace Fraction
{
	double GCD(double, double);

	struct fraction
	{
		double numerator = 1;
		double denominator = 1;

		void PrintFraction();
		void SetValues(double, double);
		void Coup();
		void Simplify();
	};

	void CopyValues(fraction, fraction&);
	void EqualizeTheDenominators(fraction&, fraction&);

	namespace Math
	{
		fraction Sum(fraction, fraction);
		fraction Minus(fraction, fraction);
		fraction Multiply(fraction, fraction);
		fraction Divide(fraction, fraction);
	}
}