#include<iostream>
#include "student.h"
using namespace::std;

void func(Student stu)
{
	cout << "func" << endl;
}
int main(int argc, char* argv[])
{
	int test;
	{
		Student Jone(1000);
	}//一对大括号决定了对象的生命周期。
	/*test = Jone.getScore();
	cout << test << endl;*/

	//func(Jone);
	// func(1001);//这里会被隐式转换。int型的1001转换成了Student 类的对象。但这不是一个好的习惯。
	cout << "before return " << endl;
	return 0;
	//如果Jone 前后没有加{}，析构函数是在return 0; 之后被调用的。
}