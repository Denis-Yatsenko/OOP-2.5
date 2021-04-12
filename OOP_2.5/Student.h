//////////////////////////////////////////////////////////////////////////////
// Student.h
#pragma once
#include <string>
#include "Man.h"

using namespace std;

class Student
{
private:
	int course;
	Man man;

public:
	int GetCourse() const { return course; }
	Man GetMan() const { return man; }

	void SetCourse(int course) { this->course = course; }
	void SetMan(Man man) { this->man = man; }

	void Init(int course, Man man);
	string toString() const;
	void Display() const;
	void Read();

	void IncCourse() { this->course++; }

	Student(const int course = 0, const string name = "Studentka", const int age = 0, const char gender = 'F', const double weight = 0);
	Student(const Student& s) { SetCourse(s.GetCourse()); SetMan(s.GetMan()); }

	Student& operator --();
	Student& operator ++();
	Student operator --(int);
	Student operator ++(int);

	friend ostream& operator <<(ostream& out, const Student& s);
	friend istream& operator >>(istream& in, Student& s);

	Student& operator =(const Student& s);

	operator string() const;

};