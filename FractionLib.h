#pragma once

#include <iostream>
#include <cmath>


#define __standard_template template <typename T = double>
#define __standard_template_wd template <typename T>

enum FRACTIONPARTS
{
	NUMERATOR,
	DENOMINATOR,
	ALL
};

enum COMPARISONSTATUS
{
	EQUALS,
	GREATER,
	LESS
};


namespace Fraction
{
	double GCD(double, double);
	__standard_template_wd void CopyValues(fraction<T>, fraction<T>&);
	__standard_template_wd void EqualizeTheDenominators(fraction<T>&, fraction<T>&);

	__standard_template class fraction
	{
	private:
		T numerator;
		T denominator;
	public:
		using type = T;

		fraction() : numerator(1), denominator(1) {}
		fraction(T n, T d) : numerator(n), denominator(d) {}
		void PrintFraction(FRACTIONPARTS = ALL) const;
		T GetFraction(FRACTIONPARTS) const;
		bool SetValues(T, T = 1);
		T GetAnswer();
		void Coup();
		void Simplify();


		fraction operator+(fraction<T>) const;
		fraction operator-(fraction<T>) const;
		fraction operator*(fraction<T>) const;
		fraction operator/(fraction<T>) const;

		fraction<T>& operator++();
		fraction<T>& operator--();

		fraction<T>& operator-=(fraction<T>);
		fraction<T>& operator+=(fraction<T>);
		fraction<T>& operator*=(fraction<T>);
		fraction<T>& operator/=(fraction<T>);

		bool operator==(fraction<T>) const;
		bool operator!=(fraction<T>) const;
		bool operator>=(fraction<T>) const;
		bool operator<=(fraction<T>) const;
		bool operator>(fraction<T>) const;
		bool operator<(fraction<T>) const;
	};



	namespace Comparison
	{
		__standard_template_wd COMPARISONSTATUS Comparison(fraction<T>, fraction<T>);
		__standard_template_wd fraction<T> Max(fraction<T>, fraction<T>);
		__standard_template_wd fraction<T> Min(fraction<T>, fraction<T>);
	}

	namespace Math
	{
		__standard_template_wd fraction<T> Sum(fraction<T>, fraction<T>);
		__standard_template_wd fraction<T> Minus(fraction<T>, fraction<T>);
		__standard_template_wd fraction<T> Multiply(fraction<T>, fraction<T>);
		__standard_template_wd fraction<T> Divide(fraction<T>, fraction<T>);
	}

	template <typename NEW_TYPE, typename OLD_TYPE>
	fraction<NEW_TYPE> TypesConverter(fraction<OLD_TYPE>);
}

//#undef __standard_template