#pragma once

#include <iostream>


namespace Fraction
{
	int GCD(int, int);

	struct fraction
	{
		double numerator = 1;
		double denominator = 1;

		void PrintFraction();
		void SetValues(double, double);
		void Coup();
		void Simplify();
	};

	fraction Sum(fraction, fraction);
	fraction Minus(fraction, fraction);
	fraction Multiply(fraction, fraction);
	fraction Divide(fraction, fraction);
}