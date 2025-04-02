#include "FractionLib.h"

namespace Fraction
{
	void fraction::PrintFraction()
	{
		std::cout << numerator << "/" << denominator << std::endl;
	}

	void fraction::SetValues(double n, double d = 1)
	{
		if (d == 0)
		{
			return;
		}

		numerator = n;
		denominator = d;
	}
	
	double fraction::GetAnswer()
	{
		if (denominator == 0)
		{
			return 0;
		}

		return numerator / denominator;
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