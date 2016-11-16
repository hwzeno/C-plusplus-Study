#include<iostream>
//#include<stdio.h>

using namespace::std;

#define MAX(a,b) ((a)>(b)?(a):(b))

#define square(x) ((x)*(x))

inline int max(int a, int b)
{
	return a > b ? a : b;
}
int main(int argc, char* argv[])
{
	int a = 5, b = 4;
	int e = square(2+3);

	cout << e << endl;

	int c = max(a++, b);
	cout << c << endl;
	int d = MAX(a++, b);
	cout << d << endl;
	cout << a << endl;
return 0;
}
