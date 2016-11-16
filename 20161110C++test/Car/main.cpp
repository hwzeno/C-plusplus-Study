#include<iostream>
using namespace::std;
/*
加构造函数的情况
*/
#include "Car.h";



int main()
{
	Car a;
	cout << " end of Car a  " << endl;//运行会发现在打印该语句时，构造函数已经被调用了
	//第一次打印时，默认的构造函数会给成员变量初始化成一个随机值。
	a.print();
	//手动初始化
	a.setProperty(10000, 123456);
	a.print();
	a.run();
	
	return 0;
}