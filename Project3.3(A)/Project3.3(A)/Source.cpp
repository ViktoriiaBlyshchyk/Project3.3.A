#include "Complex1.h"
#include "Complex2.h"
#include <iostream>

using namespace std;

int main()
{
	Complex1 x, y;
	cin >> x >> y;
	cout << x + y << endl;
	cout << x * y << endl;
	if (x == y)
		cout << "True\n";
	else
		cout << "False\n";

	Complex2 a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a * b << endl;
	if (a == b)
		cout << "True\n";
	else
		cout << "False\n";

	return 0;
}