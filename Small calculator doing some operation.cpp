#include <iostream>
using namespace std;
int main()
{
	char oper;
	float num1, num2;
	do {
		cout << "Enter operator to commit a operation and to end the program enter 0 :\n ";
		cin >> oper;
		cout << " Enter tow operands :\n";
		cin >> num1 >> num2;
		switch (oper) {
		case '+':
			cout << num1 << "+" << num2 << "=" << num1 + num2 << "\n";
			break;
		case '-':
			cout << num1 << "-" << num2 << "=" << num1 - num2 << "\n";
			break;
		case '*':
			cout << num1 << "*" << num2 << "=" << num1 * num2 << "\n";
			break;
		case '/':
			cout << num1 << "/" << num2 << "=" << num1 / num2 << "\n";
			break;
		case'%':
			cout << num1 << "%" << num2 << "=" << int(num1) % int(num2) << "\n";
			break;
		default:
			cout << "error in the operator !" << "\n";
			break;
		}
	} while (oper != '0');
	system("pause");
}