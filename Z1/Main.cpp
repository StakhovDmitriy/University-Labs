#include "Reminder.h"
void main() 
{
	Reminder *R = new Reminder();
	R->SetLastName("Stakhov");
	R->SetName("Dmitriy");
	R->SetPatronym("Sergeevich");
	R->SetDate(6, 9, 2017);
	R->AddItem("Watch anime!!!");
	R->AddItem("Do homework.");
	R->DeleteItem("Do homework.");
	R->Print();
	system("pause");
}