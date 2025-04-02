#include "FractionLib.h"

namespace Fraction
{
	int GCD(int a, int b) {
		while (b) {
			a %= b;
			std::swap(a, b);
		}
		return a;
	}

	fraction EqualizeTheDenominators(fraction fr_arr[2])
	{
		fr_arr[0].Simplify();
		fr_arr[1].Simplify();
	}

	fraction Sum(fraction a, fraction b)
	{
		fraction res;

		if (a.denominator != b.denominator)
		{

		}

		res.denominator = a.denominator;
		res.numerator = a.numerator + b.numerator;
		return res;
	}

	fraction Minus(fraction a, fraction b)
	{
		fraction res;

		if (a.denominator != b.denominator)
		{

		}

		res.denominator = a.denominator;
		res.numerator = a.numerator - b.numerator;
		return res;
	}

	fraction Multiply(fraction a, fraction b)
	{
		fraction res;
		res.denominator = a.denominator * b.denominator;
		res.numerator = a.numerator * b.numerator;
		return res;
	}

	fraction Divide(fraction a, fraction b)
	{
		fraction res;
		b.Coup();
		res.denominator = a.denominator * b.denominator;
		res.numerator = a.numerator * b.numerator;
		b.Coup();
		return res;
	}
}