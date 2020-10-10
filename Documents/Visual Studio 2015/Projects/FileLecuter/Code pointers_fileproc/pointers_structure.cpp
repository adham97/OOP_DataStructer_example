#include<iostream>
using namespace std;
 
void fun1(int x);//passing by value
void fun2(int* y);//passing by pointer
void fun3(int& z);//passing by reference

///*
typedef struct{
int Id;
char Name[20];
char Address[64];
int Age;
} STUDENT;
//*/
 
int main() 
{ 

/*    // function calls ...
	int a =5 , b = 5 , c = 5;
	cout<<"Before calling"<<endl;
	cout<<" a= "<<a<<endl;
	cout<<"Address inside main a: "<<&a<<endl;
	cout<<" b= "<<b<<endl;
	cout<<"Address inside main b: "<<&b<<endl;
	cout<<" c= "<<c<<endl;
	cout<<"Address inside main c: "<<&c<<endl;
	fun1(a); fun2(&b);fun3(c);
	cout<<"After calling"<<endl;
	cout<<" a= "<<a<<endl;
	cout<<" b= "<<b<<endl;
	cout<<" c= "<<c<<endl;

*/

 /*
  //pointers review
	int x=5;
	int *p;
	p=&x;
	cout<<"Address of x: "<<&x<<endl;
	cout<<"Value of pointer p: "<<p<<endl;
	cout<<"Address of variable p: "<<&p<<endl;
	cout<<"value of *p:  "<<*p<<endl;
	p=new int;
	cout<<"Value of pointer p: "<<p<<endl;
	cout<<"Address of variable p: "<<&p<<endl;
	cout<<sizeof(p)<<endl;
	cout<<sizeof(x)<<endl;
	cout<<"value of after *p:  "<<*p<<endl;
	*p=100;
	//delete p;
	
	p=new int;
	cout<<"Value of pointer 2 p: "<<p<<endl;
	
*/

/*   // pointer and Arrays

int A[]={10,20,30,40};
    int *p;
    p=A; // &A[0]
    cout<<"Address of Array A: "<<A<<endl;
    cout<<"Address of pointer p: "<<p<<endl;
    cout<<A[1]<<endl;
    cout<<*(p+1)<<endl;
    
    p++;
    A++;
    cout<<*(p+1)<<endl;
   
  
*/


///* //  Structure
 STUDENT s = {10,"Ali", "Nablus", 20};
cout<< s.Id <<endl;
cout<< s.Name <<endl;
cout<< s.Address <<endl;
cout<< s.Age <<endl;


STUDENT *p;
cout<<"size of struc "<<sizeof(s)<<endl;
cout<<"size of pointer struct "<<sizeof(p)<<endl;
p=&s;//p= new STUDENT
cout<< p->Id <<endl;
cout<< &(s.Id) <<endl;
cout<< p <<endl;
cout<< (*p).Id <<endl;
// */


 return 0;   
} 

void fun1(int x){ x++;
	cout<<"Address inside fun1 x: "<<&x<<endl;
	}//passing by value
void fun2(int* y){ (*y)++;
	cout<<"Address inside fun2 y: "<<y<<endl;
	}//passing by pointer
void fun3(int& z){ z++;
	cout<<"Address inside fun3 z: "<<&z<<endl;
	}//passing by reference
