
#include <iostream>
using namespace std;


struct Employee_record
{
	int employee_id;
	int salary;
};

void increase_salary(Employee_record employee_copy, int bonus_amount)
{
	employee_copy.salary = employee_copy.salary + bonus_amount;

	cout << "Insdie function (copy): " << employee_copy.salary << endl;
}

int main()
{
	Employee_record employee_main;
	int bonus_amount;

	cout << "Enter employee id#: ";
	cin >> employee_main.employee_id;

	cout << "Enter employee salary: ";
	cin >> employee_main.salary;

	cout << "Enter bonus: ";
	cin >> bonus_amount;

	cout << "Before function call (main): " << employee_main.salary << endl;

	increase_salary(employee_main, bonus_amount);

	cout << "After function call (main): " << employee_main.salary << endl;

	return 0;
}

