#include<iostream>
using namespace std;

double factorial(int n) {
	double fact;

	for (int i = 0; i < n; i++) {
		fact = n * i;
	}

	return fact;
}

double factRec(double n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n*factRec(n - 1);
	}
}

void main() {

	//cout << factorial(10000) << endl;
	cout << factRec(10) << endl;
	system("pause");
}