#include <iostream>
using namespace std;

struct Result_record
{
	int total;
	float average;

};

Result_record calculate_result(int mark1, int mark2, int mark3);



int main()
{

	int mark1, mark2, mark3;

	cout << "Enter mark 1: ";
	cin >> mark1 >> mark2 >> mark3;

	Result_record result_main = calculate_result(mark1, mark2, mark3);

	cout << "Total: " << result_main.total << endl;
	cout << "Average: " << result_main.average << endl;

	return 0;
}

Result_record calculate_result(int mark1, int mark2, int mark3)
{
	Result_record temp_result;
	//compute total and average
	temp_result.total = mark1 + mark2 + mark3;
	temp_result.average = temp_result.total / 3.0f;

	return temp_result;
}
