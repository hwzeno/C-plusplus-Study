//类的成员函数的外部实现
#include "Car.h"
#include<iostream>
using namespace::std;

//Car::Car()
//{
//	//m_price = 11;
//	//m_carNum = 19;
//}
Car::Car(int price, int carNum)
{
	setProperty(price, carNum);
	cout << "where constructor function be refed" << endl;
}
void Car::run()
{
	cout << "Car run" << endl;

}
void Car::stop()
{
	cout << "Car stop" << endl;
}
void Car::setProperty(int price, int carNum)
{
	this->m_price = price;
	this->m_carNum = carNum;
}
void Car::print()
{
	cout << "This car price is " << m_price << endl;
	cout << "This car number is " << m_carNum << endl;
}