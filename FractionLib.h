#pragma once

#include <iostream>
#include <cmath>


namespace Fraction
{
	enum FRACTIONPARTS 
	{
		NUMERATOR,
		DENOMINATOR,
		ALL
	};

	enum COMPARISONSTATUS
	{
		EQUALS,
		GREATER,
		LESS
	};

	double GCD(double, double);

	struct fraction
	{
		double numerator = 1;
		double denominator = 1;

		void PrintFraction(FRACTIONPARTS);
		double GetFraction(FRACTIONPARTS);
		void SetValues(double, double);
		double GetAnswer();
		void Coup();
		void Simplify();
	};

	void CopyValues(fraction, fraction&);
	void EqualizeTheDenominators(fraction&, fraction&);

	namespace Comparison
	{
		COMPARISONSTATUS Comparison(fraction, fraction);
		fraction Max(fraction, fraction);
		fraction Min(fraction, fraction);
	}

	namespace Math
	{
		fraction Sum(fraction, fraction);
		fraction Minus(fraction, fraction);
		fraction Multiply(fraction, fraction);
		fraction Divide(fraction, fraction);
	}
}