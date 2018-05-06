#include "Employee.h"
#include "PermanentWorker.h"


#include <iostream> 
using namespace std;

PermanentWorker::PermanentWorker(const char* name, int money)
	:salary(money) ,Employee(name)
	{	}

int PermanentWorker::GetPay() const
{
	return salary;
}

void PermanentWorker::ShowSalaryInfo() 
{
	ShowYourName();
	cout << "salary : " << GetPay() << endl << endl;
}