#include "FractionLib.h"

namespace Fraction
{
	void fraction::PrintFraction()
	{
		std::cout << numerator << "/" << denominator << std::endl;
	}

	void fraction::SetValues(double n, double d)
	{
		numerator = n;
		denominator = d;
	}

	void fraction::Coup()
	{
		double temp = denominator;
		denominator = numerator;
		numerator = temp;
	}

	void fraction::Simplify() {
		double divisor = GCD(abs(numerator), abs(denominator));
		numerator /= divisor;
		denominator /= divisor;
		if (denominator < 0) {
			numerator = -numerator;
			denominator = -denominator;
		}
	}
}