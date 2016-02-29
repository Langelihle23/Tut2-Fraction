#include<iostream>
#include "Fraction.h"

using namespace std;


Fraction::Fraction(int numer, int denom)  //Constructor definition
{
	numerator = numer;
	denominator = denom;
	
}

Fraction::~Fraction()					//Destructor definition
{

}

//Member function definitions
int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::setNumerator(int num)
{
	numerator = num;
}

void Fraction::setDenominator(int den)
{
	denominator = den;
}



Fraction Fraction::Add(Fraction number)
{
	return Fraction(numerator*number.denominator + numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::Subtract(Fraction number)
{
	return Fraction(numerator*number.denominator - numerator*number.denominator, denominator*number.denominator);
}


Fraction Fraction::Multiply(Fraction number)
{

	return Fraction(numerator*number.numerator, denominator*number.denominator);
}


Fraction Fraction::Divide(Fraction number)
{
	return Fraction(numerator*number.denominator,denominator*number.numerator);
}

void Fraction::Print()
{
	int x, y;
	//check conditions before printing
	if (numerator == 0)
	{
		cout << "The answer is 0." << endl;
	}
	else if (denominator == 1)
	{
		cout << "The  answer is" << numerator;
	}
	else if (numerator > denominator)    //If the numerator is greater than the denominator, then change to a mixed number
	{
		x = numerator / denominator;
		y = numerator % denominator;
		cout << "The mixed number fraction is" << x << "and" << y << "/" << denominator << endl;
	}
	else
		cout << "The result is" << numerator << "/" << denominator << endl;
}


