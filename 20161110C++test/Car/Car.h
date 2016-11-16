#pragma once
#ifndef _CAR_H_
#define _CAR_H_

class Car
{
public://四个公有函数
	//Car();//默认构造函数，名字跟类相同；可以有参数，但是没有返回值。
	Car(int price = 22, int carNum = 33);//默认构造函数可以重载。给默认值，可以省去没有参数的默认构造函数。
	void run();
	void stop();

	void setProperty(int price, int carNum);
	void print();//一个辅助函数，做一些打印操作

private://两个属性
	int m_price;
	int m_carNum;

};
#endif;