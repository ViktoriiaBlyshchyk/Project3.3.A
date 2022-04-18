#include "Complex.h"

Complex::Complex()
	: x(0), y(0)
{}

Complex::Complex(const double x, const double y)
	: x(x), y(y)
{}

Complex::Complex(const Complex& c)
	: x(c.x), y(c.y)
{}

Complex::~Complex()
{ }

Complex& Complex::operator = (const Complex& c)
{
	x = c.x;
	y = c.y;

	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	if (y >= 0)
		ss << x << "+" << y << "i\n";
	else
		ss << x << y << "i\n";
	return ss.str();
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex& c)
{
	cout << "Real: "; in >> c.x;
	cout << "Image: "; in >> c.y;
	cout << endl;
	return in;
}

