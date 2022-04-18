#include "Complex2.h"

Complex2::Complex2()
	: Complex(0, 0)
{}

Complex2::Complex2(double x, double y)
{
	SetX(x);
	SetY(y);
}

Complex2::Complex2(const Complex2& c)
{
	SetX(c.GetX());
	SetY(c.GetY());
}

Complex2::~Complex2()
{ }

ostream& operator << (ostream& out, const Complex2& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex2& c)
{
	double x, y;
	cout << "Real: "; in >> x;
	cout << "Image: "; in >> y;

	c.SetX(x);
	c.SetY(y);
	return in;
}

Complex2 operator + (const Complex2& a, const Complex2& b)
{
	return Complex2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Complex2 operator * (const Complex2& a, const Complex2& b)
{
	return Complex2(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}

bool operator == (const Complex2& a, const Complex2& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}

