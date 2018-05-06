#pragma once
class PermanentWorker :public Employee
{
private:
	
	int salary;
public:
	PermanentWorker(const char* name, int money);
	int GetPay() const;
	void ShowSalaryInfo();
};