//////////////////////////////////////////////////////////////////////////////
// Man.h
#pragma once
#include <string>

using namespace std;

class Man
{
private:
	string name;
	int age;
	char gender;
	double weight;

public:
	string GetName() const { return name; }
	int GetAge() const { return age; }
	char GetGender() const { return gender; }
	double GetWeight() const { return weight; }

	void SetName(string name) { this->name = name; }
	void SetAge(int age) { this->age = age; }
	void SetGender(char gender) { this->gender = gender; }
	void SetWeight(double weight) { this->weight = weight; }

	void Init(string name, int age, char gender, double weight);
	string toString() const;
	void Read();
	void Display() const;

	Man() { SetName(""); SetAge(0); SetGender('F'); SetWeight(0); }
	Man(string name) { SetName(name); SetAge(0); SetGender('F'); SetWeight(0); }
	Man(string name, int age) { SetName(name); SetAge(age); SetGender('F'); SetWeight(0); }
	Man(string name, int age, char gender) { SetName(name); SetAge(age); SetGender(gender); SetWeight(0); }
	Man(string name, int age, char gender, double weight) : name(name), age(age), gender(gender), weight(weight) { }
	Man(const Man& m) { SetName(m.GetName()); SetAge(m.GetAge()); SetGender(m.GetGender()); SetWeight(m.GetWeight()); }

	Man& operator --();
	Man& operator ++();
	Man operator --(int);
	Man operator ++(int);

	friend ostream& operator <<(ostream& out, const Man& m);
	friend istream& operator >>(istream& in, Man& m);

	Man& operator =(const Man& m);

	operator string() const;

};
