#include <iostream>
#define lf else if
using namespace std;

int main()
{
	float num1, num2;
	char operat;

		while (true) {
			cout << "*****************************************" << endl;

			cout << "Enter your first num: ";
			cin >> num1;

			cout << "Enter the operator (+,-,*,/): ";
			cin >> operat;

			cout << "Enter the second num: ";
			cin >> num2;

			if (operat == '+') {
				cout << "The Result is: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			
			}
			lf(operat == '-') {
				cout << "The Result is: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
				 
			}
			lf(operat == '*') {
				cout << "The Result is: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
				 
			}
			else {
				cout << "The Result is: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
				 
			}
		}
	return 0;
}