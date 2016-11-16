#include<iostream>
#include "student.h"
using namespace::std;

Student::Student(int ssID)//构造函数的实现
	:m_id(ssID), m_score(m_id)//构造函数的初始化列表,顺序要规范
{
	cout << "structor" << endl;
}
Student::~Student()//析构函数的实现
{
	cout << "destructor" << endl;
}
