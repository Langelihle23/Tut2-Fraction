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

//Operator Overloading which implements addition, subtraction, multiplication and division as memeber functions
Fraction Fraction::operator+(Fraction number)
{
	return Fraction(numerator*number.denominator + numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::operator-(Fraction number)
{
	return Fraction(numerator*number.denominator - numerator*number.denominator, denominator*number.denominator);
}

Fraction Fraction::operator*(Fraction number)
{
	return Fraction(numerator*number.numerator, denominator*number.denominator);
}

Fraction Fraction::operator/(Fraction number)
{
	return Fraction(numerator*number.denominator, denominator*number.numerator);
}


int main()
{
	Fraction myFrac;
	int num1, denom1, num2, denom2;
	cout << "Please enter the numerator of frac1:" << endl;
	cin >> num1;
	cout << "Please enter the denominator of frac1:" << endl;
	cin >> denom1;
	cout << "Please enter the numerator of frac2:" << endl;
	cin >> num2;
	cout << "Please enter the denominator of frac2:" << endl;
	cin >> denom2;
	
	int selection;
	cout << "Please select which operation you would like to do:" << endl;
	cout << "1.Add()" << endl;
	cout << "2.Subtract()" << endl;
	cout << "3.Multiply()" << endl;
	cout << "4.Divide()" << endl;
	cin >> selection;

	Fraction a(2, 3);
	Fraction b(1, 4);
	Fraction c;
	
	if (selection == 1){
		c = a + b;
	}
	else if (selection == 2){
		c = a - b;
	}
	else if (selection == 3){
		c = a * b;
	}
	else
		c = a / b;

	cin.get;
	
	return 0; 
}