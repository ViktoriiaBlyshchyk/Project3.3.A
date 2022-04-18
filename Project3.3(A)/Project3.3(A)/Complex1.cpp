#include "Complex1.h"

Complex1::Complex1()
	: Complex1(0, 0)
{}

Complex1::Complex1(double x, double y)
{
	SetX(x);
	SetY(y);
}

Complex1::Complex1(const Complex1& c)
{
	SetX(c.GetX());
	SetY(c.GetY());
}

Complex1::~Complex1()
{ }

Complex1 operator + (const Complex1& a, const Complex1& b)
{
	return Complex1(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Complex1 operator * (const Complex1& a, const Complex1& b)
{
	return Complex1(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}

bool operator == (const Complex1& a, const Complex1& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}
