#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	swap(a, b);
	cout << a << ";" << b << endl;
	return 0;
}

void swap(int &x, int &y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;	
}
