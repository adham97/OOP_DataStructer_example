include <iostream>
#include <stdafx.h>
using namespace std;

void change(int *p, int &a, int b)
{
	(*p)++;
	a++;
	b++;

}

void main() {
	int x = 1;
	int y = 1;
	int z = 1;

	change(&x, y, z);
  std::  cout<< "x =" << x << "y = " << y << " z " << z;
     

}
