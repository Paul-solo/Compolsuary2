#include<iostream>
using namespace std;
/// <summary>
/// the user gives a number then the program makes a factorial calkulation of that number 
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int factorial(int n) {
	int result;
	if (n == 1 || n == 0) {
		result = 1;
	}
	else {
		return n * factorial(n - 1);
	}
	return result;
}
/// <summary>
/// the user gives a number that the program multiplys with the users second number
/// </summary>
void multiply() {
	double number1;
	double number2;
	cout << endl << " enter an number" << endl;
	cin >> number2;
	if (number2 > 0) {
		cout << endl;
		cout << "the number you entered is " << number2;
		cout << " what do you want to multiply it with? ";
		cin >> number1;
		cout << " this wil give the number " << number2 * number1;
	}
	else
	{
		cout << "try a diferent number"<< endl;
	}
}
/// <summary>
/// the user gives a number that the program divide with the users second number
/// </summary>
void divide() {
	double number1;
	double number2;
	cout << endl << " enter an number"<< endl;
	cin >> number2;
	if (number2 > 0) {
		cout << endl;
		cout << "the number you entered is " << number2;
		cout << " what do you want to divide it with? ";
		cin >> number1;
		cout << " this wil give the number " << number2 / number1;
	}
	else
	{
		cout << "try a diferent number"<< endl;
	}
}
/// <summary>
/// the user gives a number that the program adds with the users second number
/// </summary>
void addition() {
	double number1;
	double number2;
	cout << endl << " enter an number" << endl;
	cin >> number2;
	if (number2 > 0) {
		cout << endl;
		cout << "the number you entered is " << number2;
		cout << " what do you want to add to it? ";
		cin >> number1;
		cout << " this wil give the number " << number2 + number1;
	}
	else
	{
		cout << "try a diferent number" << endl;
	}
}
/// <summary>
/// the user gives a number that the program sutract with the users second number
/// </summary>
void subtration() {
	double number1;
	double number2;
	cout << endl << " enter an number" << endl;
	cin >> number2;
	if (number2 > 0) {
		cout << endl;
		cout << "the number you entered is " << number2;
		cout << " what do you want to subtract it with? ";
		cin >> number1;
		cout << " this wil give the number " << number2 - number1;
	}
	else
	{
		cout << "try a diferent number" << endl;
	}
}
/// <summary>
/// this crates multiple list that has random nubers, then we make the user input desiered numbers before we use them 
/// </summary>
void add_poly() {
	double a[4];
	double b[4];

	int input;

	cout << "enter a number for x^3";
	cin >> input;
	a[0] = input;
	cout << "enter a number for x^2";
	cin >> input;
	a[1] = input;
	cout << "enter a number for x";
	cin >> input;
	 a[2] = input;
	 cout << "enter your constant number";
	 cin >> input;
	 a[3] = input;
	
	 cout << "now we start on the next group, enter a number for x^3";
	 cin >> input;
	 b[0] = input;
	 cout << "enter a number for x^2";
	 cin >> input;
	 b[1] = input;
	 cout << "enter a number for x";
	 cin >> input;
	 b[2] = input;
	 cout << "enter your constant number";
	 cin >> input;
	 b[3] = input;

	 cout << "this is your additon\n";
	cout << a[0] + b[0] << " x ^ 3 + ";
	cout << a[1] + b[1] << " x ^ 2 + ";
	cout << a[2] + b[2] << " x + ";
	cout << a[3] + b[3] << "  \n";

	cout << "this is subtraction\n";
	cout << a[0] - b[0] << " x ^ 3 + ";
	cout << a[1] - b[1] << " x ^ 2 + ";
	cout << a[2] - b[2] << " x + ";
	cout << a[3] - b[3] << "  \n";

	double prod[7] = { 0, 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < 4; i++)
	{
		// Multiply the current term of first polynomial
		// with every term of second polynomial.
		for (int j = 0; j < 4; j++)
			prod[i + j] += a[i] * b[j];
	}

	cout << "this is multiplication\n";
	cout << prod[0] << " x ^ 6 + ";
	cout << prod[1] << " x ^ 5 + ";
	cout << prod[2] << " x ^ 4 + ";
	cout << prod[3] << " x ^ 3 + ";
	cout << prod[4] << " x ^ 2 + ";
	cout << prod[5] << " x + ";
	cout << prod[6] << "\n";
}
/// <summary>
/// is a sub-menu for the difrent types of basic math
/// </summary>
void kalk() {
	int input;

	bool isAlive = true;

	while (isAlive)
	{
		cout << "\n type 1 addition \n type 2 for divison \n type 3 for addition\n type 4 for multiplication \n type 5 to go back ";

		cin >> input;
		int number;
		switch (input)
		{
		case 1: 
			addition();
			break;

		case 2:
			divide();
			break;

		case 3:
			addition();
			break;

		case 4:
			multiply();
			break;

		case 5:
			isAlive = false;
			break;

		default:
			cout << "error wrong comand";
			break;
		}
	}

}
/// <summary>
/// this is the main menu for the program where you can acsess evrithing 
/// </summary>
/// <returns></returns>
int main() {
	cout << " this is Paul`s amazing calkulator "<< endl;
	cout << " choose what amazing calkulatorshitt you want to do " << endl;

	int input;

	bool isAlive = true;
	
	while (isAlive)
	{
		cout << "\n type 1 for basic math \n type 2 for factorial \n type 3 for polynomial \n type 4 to kill the program ";

		cin >> input;
		int number;
		switch (input)
		{
		case 1: //addition 
			kalk();
			break;

		case 2:
			cout << " give a nuber for factorial ";
			
			cin >> number;

			cout << factorial(number);
			break; 

		case 3:
			add_poly();
			break;

		case 4:
			isAlive = false;
			break;

		default:
			cout << "error wrong comand";
			break;
		}
	}
	
	return 0;
}