#include<iostream>
using namespace std;
 int main()
 {
 	int a=10, b=100;
 	
 	cout<<"Before swap a="<<  a<<"Before swap b=" <<  b<<endl;
 	
 	a=a*b;
 	b=a/b;
 	a=a/b;
 	
 	cout<<"After swap a="<<  a<<"After swap b=" <<  b<<endl;
 	return 0;
 }
