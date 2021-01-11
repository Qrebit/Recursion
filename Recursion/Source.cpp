#include <iostream>

using namespace std;

int factorial(int fact) {
	if (fact == 0)return 1;
	return fact * factorial(fact - 1);
}

double Power(double a,int power) {
	return power > 0 ? a * Power(a, power - 1) : power < 0 ? 1 / a * Power(a, power + 1) : 1;
}

void Fibonacci_1(int limit, int d, int past) {
	if (d >= limit)return;
	cout << d << " ";
	Fibonacci_1(limit, d + past, d);
}

void Fibonacci_2(int limit, int d, int past) {
	if (limit == 0)return;
	cout << d << " ";
	Fibonacci_2(limit-1, d + past, d);
}

void main() {
	int past = 1;
	int d = 1;
	int power, limit;
	int a, c;
	cout << "Factorial - 1:" << endl;
	cout << "Power - 2:" << endl;
	cout << "Fibonacci until number - 3:" << endl;
	cout << "Fibonacci certain amount - 4:" << endl;
	cin >> c;
	cout << endl;
	cout << "Enter number:"; cin >> a;
	cout << endl;
	if (c == 1) {
		cout << "Factorial" << endl;
		cout << a << "! = " << factorial(a);
	}
	if (c == 2) {
		cout << "Enter power:"; cin >> power;
		cout << "Power" << endl;
		cout << a << " ^ " << power << " = " << Power(a, power);
	}
	if (c == 3) {
		cout << "Fibonacci until number" << endl;
		Fibonacci_1(a, d, past);
	}
	if (c == 4) {
		cout << "Fibonacci certain amount" << endl;
		Fibonacci_2(a, d, past);
	}
}