// OOP : object orinted programing
// OOP : overloading , class

#include<iostream>
using namespace std;


class line {
	// access modification 
	// public : عام
	// private : خاص
	// protected : محمي
	

	int x;
	int y;

public: void setX(int newX) {
		if (newX < 0) 
			cout << " try agin" << endl;
		else 
			x = newX;
	}

public:	int getX() {
		return x;
	}

public: void print() {
		int d = getX();
		if (d < 0) 
			cout << " try agin" << endl;
		else
			cout << getX() << endl;
	}

};


void main() {
	line l1;
	l1.setX(5);
	l1.print();
	
	l1.setX(3);
	l1.print();

	l1.setX(10);
	l1.print();

	l1.setX(-5);
	l1.print();
	
	system("pause");
}