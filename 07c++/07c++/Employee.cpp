#include "Employee.h"

#include <iostream>
using namespace std;

Employee::Employee(const char* name)
{
	strcpy_s(this->name,strlen(name)+1 ,name);
}
void Employee::ShowYourName() const
{
	cout << "name: " << name << endl;
}