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

	class fraction
	{
	private:
		double numerator;
		double denominator;
	public:
		fraction() : numerator(0), denominator(1) {}
		fraction(double n, double d) : numerator(n), denominator(d) {}
		void PrintFraction(FRACTIONPARTS);
		double GetFraction(FRACTIONPARTS);
		void SetValues(double, double d = 1);
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

#ifdef __cplusplus >= 202002L
	using enum Fraction::FRACTIONPARTS;
	using enum Fraction::COMPARISONSTATUS;
#endif

using FRACTIONPARTS = Fraction::FRACTIONPARTS;
using COMPARISONSTATUS = Fraction::COMPARISONSTATUS;