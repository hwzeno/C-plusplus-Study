#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int val = 0;
	int &rval = val;
	cout << &val << endl;
	cout << &rval << endl;
}
