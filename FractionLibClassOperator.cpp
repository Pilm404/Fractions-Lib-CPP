#include "FractionLib.h"

namespace Fraction
{
	__standard_template_wd fraction<T> fraction<T>::operator+(fraction<T> b) const
	{
		fraction<T> a(numerator, denominator), res;
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

	__standard_template_wd fraction<T> fraction<T>::operator-(fraction<T> b) const
	{
		fraction<T> a(numerator, denominator), res;
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

	__standard_template_wd fraction<T> fraction<T>::operator*(fraction<T> b) const
	{
		fraction<T> a(numerator, denominator), res;

		res.SetValues(a.GetFraction(NUMERATOR) * b.GetFraction(NUMERATOR),
			a.GetFraction(DENOMINATOR) * a.GetFraction(DENOMINATOR));

		res.Simplify();
		return res;
	}

	__standard_template_wd fraction<T> fraction<T>::operator/(fraction<T> b) const
	{
		fraction<T> a(numerator, denominator), res;
		a.Simplify(); b.Simplify();
		b.Coup();

		if (b.GetFraction(DENOMINATOR) == 0 || b.GetFraction(NUMERATOR) == 0)
		{
			return fraction();
		}

		res.SetValues(a.GetFraction(NUMERATOR) * b.GetFraction(NUMERATOR),
			a.GetFraction(DENOMINATOR) * a.GetFraction(DENOMINATOR));
		res.Simplify();
		return res;
	}


	__standard_template_wd fraction<T>& fraction<T>::operator++()
	{

		numerator++;
		return *this;
	}

	__standard_template_wd fraction<T>& fraction<T>::operator--()
	{

		numerator--;
		return *this;
	}


	__standard_template_wd fraction<T>& fraction<T>::operator+=(fraction<T> f2)
	{
		fraction<T> f1(numerator, denominator);
		f1 = f1 + f2;
		numerator = f1.GetFraction(NUMERATOR);
		denominator = f1.GetFraction(DENOMINATOR);
		return *this;
	}

	__standard_template_wd fraction<T>& fraction<T>::operator-=(fraction<T> f2)
	{
		fraction<T> f1(numerator, denominator);
		f1 = f1 - f2;
		numerator = f1.GetFraction(NUMERATOR);
		denominator = f1.GetFraction(DENOMINATOR);
		return *this;
	}

	__standard_template_wd fraction<T>& fraction<T>::operator*=(fraction<T> f2)
	{
		fraction<T> f1(numerator, denominator);
		f1 = f1 * f2;
		numerator = f1.GetFraction(NUMERATOR);
		denominator = f1.GetFraction(DENOMINATOR);
		return *this;
	}

	__standard_template_wd fraction<T>& fraction<T>::operator/=(fraction<T> f2)
	{
		fraction<T> f1(numerator, denominator);
		f1 = f1 / f2;
		numerator = f1.GetFraction(NUMERATOR);
		denominator = f1.GetFraction(DENOMINATOR);
		return *this;
	}


	__standard_template_wd bool fraction<T>::operator==(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) > f2.GetFraction(NUMERATOR))
		{
			return false;
		}
		else if (f1.GetFraction(NUMERATOR) < f2.GetFraction(NUMERATOR))
		{
			return false;
		}
		return true;
	}

	__standard_template_wd bool fraction<T>::operator!=(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) > f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		else if (f1.GetFraction(NUMERATOR) < f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		return false;
	}

	__standard_template_wd bool fraction<T>::operator>=(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) >= f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		return false;
	}

	__standard_template_wd bool fraction<T>::operator<=(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) <= f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		return false;
	}

	__standard_template_wd bool fraction<T>::operator>(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) > f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		return false;
	}

	__standard_template_wd bool fraction<T>::operator<(fraction<T> f2) const
	{
		fraction f1(numerator, denominator);
		f1.Simplify();
		f2.Simplify();
		EqualizeTheDenominators(f1, f2);
		if (f1.GetFraction(NUMERATOR) < f2.GetFraction(NUMERATOR))
		{
			return true;
		}
		return false;
	}
}