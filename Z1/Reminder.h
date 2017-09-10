#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
struct Reminder
{
private:
	string LastName;
	string Name;
	string Patronymic;
	int Date[3];
	vector<string> Items;
public:
	void SetLastName(string lastName) {
		this->LastName = lastName;
	}
	void SetName(string name) {
		this->Name = name;
	}
	void SetPatronym(string patronymic) {
		this->Patronymic = patronymic;
	}
	void SetDate(int day, int mounth, int year) {
		this->Date[0] = day;
		this->Date[1] = mounth;
		this->Date[2] = year;
	}
	void AddItem(string item) {
		this->Items.push_back(item);
	}
	void DeleteItem(string item) {
		for (int i = 0; i < this->Items.size(); i++) {
			if (Items[i] == item)
			{
				Items.erase(Items.begin() + i);
				return;
			}
		}
	}
	void Print() {
		cout << "LastName: " << this->LastName << endl;
		cout << "Name: " << this->Name << endl;
		cout << "Patronymic: " << this->Patronymic << endl;
		cout << "Date: " << this->Date[0] << ":" << this->Date[1] <<":" << this->Date[2] << endl;
		cout << "Items:" << endl;
		for (int i = 0; i < this->Items.size(); i++)
			cout << "\t" << this->Items[i] << endl;
	}
};
