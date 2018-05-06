#pragma once
#include "Employee.h"
#include "PermanentWorker.h"


class EmployeeHandler
{
private:
	Employee * empList[50];
	int empNum;
public:
	EmployeeHandler();
	void AddEmployee(Employee* emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();	
};