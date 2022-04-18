#pragma once
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Complex
{
	double x, y;
public:

	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }

	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();

	Complex& operator = (const Complex& c);
	operator string() const;

	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);
};

