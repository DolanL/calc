#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
double div(double x, int y) {
	double rez;
	rez = x / y;
	return rez;
}
int mod(int x, int y) {
	cout << "Enter a value for the module" << endl;
	int m;
	cin >> m;
	return ((x - y) % m);
}
double pow(double x) {
	cout << "Enter a value for the power" << endl;
	int p;
	cin >> p;
	double x1 = x;
	if (p > 0) {
		while (p > 1) {
			x = x1 * x;
			p--;
		}
	}
	else {
		if (p < 0) {
			x = 1 / x;
			while (p < -1) {
				x = x / x1;
				p++;
			}
		}
		else
			x = 1;
	}
	return x;
}
int rol(int x) { return (x << 1); }
int ror(int x) { return (x >> 1); }
int nott(int x) { return (!x); }
int andd(int x, int y) { return (x & y); }
int orr(int x, int y) { return (x | y); }
int main() {
	while (1) {
		cout << endl
			<< "Select the operation [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
		char operand;
		cin >> operand;
		int x, y;
		switch (operand) {
		case '+':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Ener the second figure" << endl;
			cin >> y;
			cout << add(x, y) << endl;
			break;
		case '-':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			cout << sub(x, y) << endl;
			break;
		case '*':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			cout << mul(x, y) << endl;
			break;
		case '/':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			if (y != 0) {
				cout << div(double(x), y) << endl;
			}
                        else
				cout << "Error.There are 0 in the denominator " << endl;
			break;
		case '%':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			cout << mod(x, y) << endl;
			break;
		case '^':
			cout << "Enter x figure" << endl;
			cin >> x;
			cout << pow((double)x);
			break;
		case '<':
			cout << "Enter x figure" << endl;
			cin >> x;
			cout << rol(x) << endl;
			break;
		case '>':
			cout << "Enter x figure" << endl;
			cin >> x;
			cout << ror(x) << endl;
			break;
		case '!':
			cout << "Enter x figure" << endl;
			cin >> x;
			cout << nott(x) << endl;
			break;
		case '&':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			cout << andd(x, y) << endl;
			break;
		case '|':
			cout << "Enter the first figure" << endl;
			cin >> x;
			cout << "Enter the second figure" << endl;
			cin >> y;
			cout << orr(x, y) << endl;
			break;
		default:
			cout << "Error" << endl;
		}
	}
	return 0;
}
