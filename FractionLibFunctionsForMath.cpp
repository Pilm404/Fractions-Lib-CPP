#include "FractionLib.h"

namespace Fraction
{
	namespace Math
	{
		__standard_template_wd fraction<T> Sum(fraction<T> a, fraction<T> b)
		{
			return a + b;
		}

		__standard_template_wd fraction<T> Minus(fraction<T> a, fraction<T> b)
		{
			return a - b;
		}

		__standard_template_wd fraction<T> Multiply(fraction<T> a, fraction<T> b)
		{
			return a * b;
		}

		__standard_template_wd fraction<T> Divide(fraction<T> a, fraction<T> b)
		{
			return a / b;
		}
	}
}