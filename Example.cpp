#include "FractionLib.h"

int main()
{
	Fraction::fraction f{ 2, 10 };
	f.Simplify();
	f.PrintFraction();
}