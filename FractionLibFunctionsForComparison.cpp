#include "FractionLib.h"

namespace Fraction
{
	namespace Comparison
	{
		__standard_template_wd COMPARISONSTATUS Comparison(fraction<T> a, fraction<T> b)
		{
			a.Simplify();
			b.Simplify();
			EqualizeTheDenominators(a, b);
			if (a.GetFraction(NUMERATOR) > b.GetFraction(NUMERATOR))
			{
				return GREATER;	
			}
			else if (a.GetFraction(NUMERATOR) < b.GetFraction(NUMERATOR))
			{
				return LESS;
			}
			return EQUALS;
		}

		__standard_template_wd fraction<T> Max(fraction<T> a, fraction<T> b)
		{
			COMPARISONSTATUS result = Comparison(a, b);
			switch (result)
			{
			case Fraction::GREATER:
				return a;
			case Fraction::LESS:
				return b;
			default:
				break;
			}
			return a;
		}

		__standard_template_wd fraction<T> Min(fraction a<T>, fraction b<T>)
		{
			COMPARISONSTATUS result = Comparison(a, b);
			switch (result)
			{
			case Fraction::GREATER:
				return b;
			case Fraction::LESS:
				return a;
			default:
				break;
			}
			return a;
		}
	}
}