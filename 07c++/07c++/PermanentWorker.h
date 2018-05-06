#pragma once
class PermanentWorker
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(const char* name, int money);
	int GetPay() const;
	void ShowSalaryInfo();
};