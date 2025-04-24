#include "FractionLib.h"

namespace Fraction
{
	namespace Math
	{
		fraction Sum(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			if (a.GetFraction(DENOMINATOR) != b.GetFraction(DENOMINATOR))
			{
				EqualizeTheDenominators(a, b);
			}

			res.SetValues(a.GetFraction(NUMERATOR) + b.GetFraction(NUMERATOR),
				a.GetFraction(DENOMINATOR));
			res.Simplify();
			return res;
		}

		fraction Minus(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			if (a.GetFraction(DENOMINATOR) != b.GetFraction(DENOMINATOR))
			{
				EqualizeTheDenominators(a, b);
			}

			res.SetValues(a.GetFraction(NUMERATOR) - b.GetFraction(NUMERATOR),
				a.GetFraction(DENOMINATOR));
			res.Simplify();
			return res;
		}

		fraction Multiply(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			res.SetValues(a.GetFraction(NUMERATOR) * b.GetFraction(NUMERATOR),
				a.GetFraction(DENOMINATOR) * a.GetFraction(DENOMINATOR));

			res.Simplify();
			return res;
		}

		fraction Divide(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();
			b.Coup();

			res.SetValues(a.GetFraction(NUMERATOR) * b.GetFraction(NUMERATOR), 
				a.GetFraction(DENOMINATOR) * a.GetFraction(DENOMINATOR));
			res.Simplify();
			return res;
		}
	}
}