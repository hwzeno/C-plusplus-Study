#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	struct ref_test
	{
		int a;
		char b;
	};
	ref_test val = {12,'c'};
	#if 0
	cout << val.a << endl;
	#endif
	ref_test &val2 = val;
	//cout << val2.b << endl;
	cout << &val << endl;
	cout << &val2 << endl;
	return 0;
}
