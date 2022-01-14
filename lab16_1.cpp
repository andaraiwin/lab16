#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	char b = 'A';
	char &c = b;
	void *x = &a;
	void *y = &b;
	void *z = x;

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << "\n";
	b = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	b = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	*(int*)x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	*(int*)z = 7;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << "\n";
	
	return 0;
}