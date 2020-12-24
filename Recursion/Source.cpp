#include <iostream>

using namespace std;

int factorial(int fact, int count, int d) {
	if (count == fact+1)return d;
	d = d * count;
	count++;
	factorial(fact, count, d);
}

int Power(int a,int power, int count, int d) {
	if (count == power + 1)return d;
	d = d * a;
	count++;
	Power(a, power, count, d);
}

void Fibonacci_1(int limit, int d, int past, int count) {
	int temp;
	if (d >= limit)return;
	temp = d;
	d = d + past;
	past = temp;
	if (d < limit) cout << d << " ";
	Fibonacci_1(limit, d, past, count);
}

void Fibonacci_2(int limit, int d, int past, int count) {
	int temp;
	if (count == limit-1)return;
	temp = d;
	d = d + past;
	past = temp;
	cout << d << " ";
	count++;
	Fibonacci_2(limit, d, past, count);
}

void main() {
	int past = 1;
	int count = 1;
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
		cout << a << "! = " << factorial(a, count, d);
	}
	if (c == 2) {
		cout << "Enter power:"; cin >> power;
		cout << "Power" << endl;
		cout << a << " ^ " << power << " = " << Power(a, power, count, d);
	}
	if (c == 3) {
		cout << "Fibonacci until number" << endl;
		cout << "\n" << past << " " << past << " ";
		Fibonacci_1(a, d, past, count);
	}
	if (c == 4) {
		cout << "Fibonacci certain amount" << endl;
		cout << "\n" << past << " " << past << " ";
		Fibonacci_2(a, d, past, count);
	}
}