#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
class Student
{
public:
	explicit Student(int id);//如果在这个构造函数之前加上explicit（明确的）关键字，就会关闭隐式转换
	~Student();
	inline int getId() 
	{
		return m_id;
	}
	inline void setId(int id)
	{
		m_id = id;
	}

	inline int getScore()
	{
		return m_score;
	}
	inline void setScore(int score)
	{
		m_score = score;
	}
private:
	int m_id;
	int m_score;

};	
#endif;