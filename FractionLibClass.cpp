#include "FractionLib.h"



namespace Fraction
{
	__standard_template_wd void fraction<T>::PrintFraction(FRACTIONPARTS parts) const
	{
		switch (parts)
		{
		case NUMERATOR:
			std::cout << numerator << std::endl;
			break;
		case DENOMINATOR:
			std::cout << denominator << std::endl;
			break;
		case ALL:
			std::cout << numerator << "/" << denominator << std::endl;
			break;
		default:
			break;
		}
		return;
	}
	
	__standard_template_wd T fraction<T>::GetFraction(FRACTIONPARTS parts) const
	{
		switch (parts)
		{
		case NUMERATOR:
			return numerator;
			break;
		case DENOMINATOR:
			return denominator;
			break;
		default:
			break;
		}
		return 0;
	}

	__standard_template_wd bool fraction<T>::SetValues(T n, T d)
	{
		if (d == 0)
		{
			return false;
		}

		numerator = n;
		denominator = d;
		return true;
	}
	
	__standard_template_wd T fraction<T>::GetAnswer()
	{
		if (denominator == 0)
		{
			return 0;
		}

		return numerator / denominator;
	}

	__standard_template_wd void fraction<T>::Coup()
	{
		double temp = denominator;
		denominator = numerator;
		numerator = temp;
	}
	
	__standard_template_wd void fraction<T>::Simplify() {
		double divisor = GCD(abs(numerator), abs(denominator));
		numerator /= divisor;
		denominator /= divisor;
		if (denominator < 0) {
			numerator = -numerator;
			denominator = -denominator;
		}
	}
}