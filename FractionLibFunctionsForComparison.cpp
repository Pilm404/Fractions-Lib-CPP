#include "FractionLib.h"

namespace Fraction
{
	namespace Comparison
	{
		COMPARISONSTATUS Comparison(fraction a, fraction b)
		{
			a.Simplify();
			b.Simplify();
			EqualizeTheDenominators(a, b);
			if (a.numerator > b.numerator)
			{
				return GREATER;	
			}
			else if (a.numerator < b.numerator)
			{
				return LESS;
			}
			return EQUALS;
		}

		fraction Max(fraction a, fraction b)
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

		fraction Min(fraction a, fraction b)
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