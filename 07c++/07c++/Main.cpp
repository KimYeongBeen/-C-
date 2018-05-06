#include <iostream>
#include "EmployeeHandler.h"	
#include "PermanentWorker.h"

using namespace std;

int main()
{
	EmployeeHandler handler;
	
	handler.AddEmployee(new PermanentWorker("JoonKay", 350));
	handler.AddEmployee(new PermanentWorker("Lee", 250));
	handler.AddEmployee(new PermanentWorker("JUN", 150));

	handler.ShowAllSalaryInfo();
	
	handler.ShowTotalSalary();

	getchar();
	getchar();
	return 0;
}