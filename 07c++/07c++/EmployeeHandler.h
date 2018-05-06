#pragma once
#include "PermanentWorker.h"

class EmployeeHandler
{
private:
	PermanentWorker * empList[50];
	int empNum;
public:
	EmployeeHandler();
	void AddEmployee(PermanentWorker* emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();	
};