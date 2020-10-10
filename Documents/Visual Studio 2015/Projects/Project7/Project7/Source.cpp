#include <iostream>
#include <stdio.h>
using namespace std;

/*void change(int i, int*p, int &z) {
	i++;
	(*p)++;
	z++;

} 

void main()
{
	int i = 1;
	int j = 1;
	int y = 1;
	change(i, &j, y);
		cout << "i =" << i << endl;
	    cout << "j =" << j << endl;
	    cout << "y =" << y << endl;

		system("pause");*/


void main() {
	struct st {
		int id;
		char name[20];
		int age;
	}A, B, C;
	st a;
	a.id = 3214;
	strcpy(a.name, "ali");
	a.age = 18;
	cout << a.name << endl;
	cout << a.id << endl;
	cout << a.age << endl;
	system("pause");
}
