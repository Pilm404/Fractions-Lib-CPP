#include "FractionLib.h"

namespace Fraction
{
	double GCD(double a, double b) {
		while (b) {
			a = std::fmod(a, b);
			std::swap(a, b);
		}
		return a;
	}

	void CopyValues(fraction a, fraction& b)
	{
		b.denominator = a.denominator;
		b.numerator = a.numerator;
	}

	void EqualizeTheDenominators(fraction& a, fraction& b)
	{
		a.Simplify();
		b.Simplify();
		
		if (a.denominator != b.denominator)
		{
			double general_denumerator = a.denominator * b.denominator;
			fraction temp;
			CopyValues(a, temp);
			a.denominator = general_denumerator;
			a.numerator *= b.denominator;
			b.denominator = general_denumerator;
			b.numerator *= temp.denominator;
		}
	}
}