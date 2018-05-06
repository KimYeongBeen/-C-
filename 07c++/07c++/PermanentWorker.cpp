#include "PermanentWorker.h"
#include <iostream> 
using namespace std;

PermanentWorker::PermanentWorker(const char* name, int money)
	:salary(money)
{
	
	strcpy_s(this->name,strlen(name)+1 ,name);
}

int PermanentWorker::GetPay() const
{
	return salary;
}

void PermanentWorker::ShowSalaryInfo() 
{
	cout << "name : " << name << endl;
	cout << "salary : " << GetPay() << endl << endl;
}