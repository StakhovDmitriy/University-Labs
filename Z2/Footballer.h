#pragma once
#include "Person.h"
class Footballer : public Person
{
private:
		int Goals;
public:
	int GetGoals() {
		return Goals;
	}
	void SetGoals(int goals) {
		if (goals >= 0) {
			Goals = goals;
		}
	}
	friend bool operator ==(Footballer &left, Footballer &right);
	
};
bool operator == (Footballer &left, Footballer &right)
{
	if (left.GetFullName() == right.GetFullName() && left.GetAge() == right.GetAge())
	{
		return true;
	}
	else return false;
	
}