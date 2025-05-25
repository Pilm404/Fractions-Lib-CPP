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

	__standard_template_wd void CopyValues(fraction<T> a, fraction<T>& b)
	{
		b.SetValues(a.GetFraction(NUMERATOR), a.GetFraction(DENOMINATOR));
	}

	__standard_template_wd void EqualizeTheDenominators(fraction<T>& a, fraction<T>& b)
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

	template<typename NEW_TYPE, typename OLD_TYPE>
	fraction<NEW_TYPE> TypesConverter(fraction<OLD_TYPE> old_fr)
	{
		return fraction<NEW_TYPE>((NEW_TYPE)old_fr.GetFraction(NUMERATOR), (NEW_TYPE)old_fr.GetFraction(DENOMINATOR));
	}
}