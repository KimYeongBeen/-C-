#include "EmployeeHandler.h"


#include <iostream>
using namespace std;

EmployeeHandler::EmployeeHandler() :empNum(0)
	{}
void EmployeeHandler::AddEmployee(PermanentWorker* emp)
{
	empList[empNum++] = emp;
}
void EmployeeHandler::ShowAllSalaryInfo() const
{
	for (int i = 0; i < empNum; i++)
		empList[i]->ShowSalaryInfo();
}
EmployeeHandler::~EmployeeHandler()
{
	for (int i = 0; i < empNum; i++)
		delete empList[i];
}
void EmployeeHandler::ShowTotalSalary() const
{
	int sum = 0;
	for (int i = 0; i < empNum; i++)
		sum += empList[i]->GetPay();
	cout << "salary sum: " << sum << endl;
}