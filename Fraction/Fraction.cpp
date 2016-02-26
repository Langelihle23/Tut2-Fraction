#include<iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int numer=0,int denom=1);
	~Fraction();
	Fraction Add(Fraction number);
	Fraction Subtract(Fraction number);
	Fraction Multiply(Fraction number);
	Fraction Divide(Fraction number);
	int getNumerator();
	int getDenominator();
	void setNumerator(int numerator);
	void setDenominator(int denominator);
	void Print();
};



Fraction::Fraction(int numer, int denom)
{
	numerator = numer;
	denominator = denom;
	
}

Fraction::~Fraction()
{

}

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
