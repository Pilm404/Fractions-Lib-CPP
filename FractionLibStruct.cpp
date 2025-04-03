#include "FractionLib.h"

namespace Fraction
{
	void fraction::PrintFraction(FRACTIONPARTS parts = Fraction::ALL)
	{
		switch (parts)
		{
		case Fraction::NUMERATOR:
			std::cout << numerator << std::endl;
			break;
		case Fraction::DENOMINATOR:
			std::cout << denominator << std::endl;
			break;
		case Fraction::ALL:
			std::cout << numerator << "/" << denominator << std::endl;
			break;
		default:
			break;
		}
		return;
	}

	double fraction::GetFraction(FRACTIONPARTS parts)
	{
		switch (parts)
		{
		case Fraction::NUMERATOR:
			return numerator;
			break;
		case Fraction::DENOMINATOR:
			return denominator;
			break;
		default:
			break;
		}
		return 0;
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