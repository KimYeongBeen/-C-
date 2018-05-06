#pragma once
class Employee
{
private:
	char name[100];
public:
	Employee(const char* name);
	void ShowYourName() const;	
};