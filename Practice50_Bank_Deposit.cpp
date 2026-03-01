
#include <iostream>
using namespace std;


struct Bank_account

{
	int acc_number;
	int balance;
};


void deposit_money(Bank_account &account_ref, int deposit_amount)
	{
	account_ref.balance = account_ref.balance + deposit_amount;
	cout << "Balance inside function (reference): " << account_ref.balance << endl;
	}


int main()
{
	Bank_account main_acc;
	int deposit_amount;

	cout << "Enter account# ";
	cin >> main_acc.acc_number;

	cout << "Enter account balance: ";
	cin >> main_acc.balance;

	cout << "Enter amount you want to deposit: ";
	cin >> deposit_amount;

	cout << "Balance before call (main): " << main_acc.balance << endl;
	


	deposit_money(main_acc, deposit_amount);

	cout << "Balance after call (main): " << main_acc.balance << endl;

	return 0;

}
