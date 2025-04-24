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
		b.SetValues(a.GetFraction(NUMERATOR), a.GetFraction(DENOMINATOR));
	}

	void EqualizeTheDenominators(fraction& a, fraction& b)
	{
		a.Simplify();
		b.Simplify();
		
		if (a.GetFraction(DENOMINATOR) != b.GetFraction(DENOMINATOR))
		{
			double general_denumerator = a.GetFraction(DENOMINATOR) * b.GetFraction(DENOMINATOR);
			fraction temp;
			CopyValues(a, temp);
			a.SetValues(a.GetFraction(NUMERATOR) * b.GetFraction(DENOMINATOR), general_denumerator);
			b.SetValues(b.GetFraction(NUMERATOR) * temp.GetFraction(DENOMINATOR), general_denumerator);
		}

		a.Simplify();
		b.Simplify();
	}
}