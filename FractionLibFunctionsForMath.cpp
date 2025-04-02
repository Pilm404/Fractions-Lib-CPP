#include "FractionLib.h"

namespace Fraction
{
	namespace Math
	{
		fraction Sum(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			if (a.denominator != b.denominator)
			{
				EqualizeTheDenominators(a, b);
			}

			res.denominator = a.denominator;
			res.numerator = a.numerator + b.numerator;
			res.Simplify();
			return res;
		}

		fraction Minus(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			if (a.denominator != b.denominator)
			{
				EqualizeTheDenominators(a, b);
			}

			res.denominator = a.denominator;
			res.numerator = a.numerator - b.numerator;
			res.Simplify();
			return res;
		}

		fraction Multiply(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();

			res.denominator = a.denominator * b.denominator;
			res.numerator = a.numerator * b.numerator;
			res.Simplify();
			return res;
		}

		fraction Divide(fraction a, fraction b)
		{
			fraction res;
			a.Simplify(); b.Simplify();
			b.Coup();

			res.denominator = a.denominator * b.denominator;
			res.numerator = a.numerator * b.numerator;
			res.Simplify();
			return res;
		}
	}
}