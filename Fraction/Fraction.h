#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
	//Declare private member variables
	int numerator;
	int denominator;
public:
	Fraction(int numer = 0, int denom = 1);
	~Fraction();
	//Member function declarations
	Fraction Add(Fraction number);
	Fraction Subtract(Fraction number);
	Fraction Multiply(Fraction number);
	Fraction Divide(Fraction number);
	//accessor and mutator member functions
	int getNumerator();
	int getDenominator();
	void setNumerator(int numerator);
	void setDenominator(int denominator);
	void Print();

	Fraction operator+(Fraction number);
	Fraction operator-(Fraction number);
	Fraction operator*(Fraction number);
	Fraction operator/(Fraction number);

};

#endif