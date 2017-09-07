#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
private:
	string Name;
	string LastName;
	int Age;
public:
	Person(string name, string lastName, int age)
	{
		this->Name = name;
		this->LastName = lastName;
		this->Age = age;
	}
	Person()
	{
		this->Name = "No name";
		this->LastName = "No last name";
		this->Age = 18;
	}

	void SetName(string name) {
		this->Name = name;
	}
	void SetLastName(string lastname) {
		this->LastName = lastname;
	}
	void SetAge(int age) {
		if (age >= 0)
			this->Age = age;
	}
	string GetName() {
		return this->Name;
	}
	string GetLastName() {
		return this->LastName;
	}
	int GetAge() {
		return this->Age;
	}
	string GetFullName() {
		return this->Name + " " + this->LastName;
	}
	void Print() {
		cout << "Name: " << this->Name << endl;
		cout << "Last Name: " << this->LastName << endl;
		cout << "Age: " << this->Age << endl;
	}
};

