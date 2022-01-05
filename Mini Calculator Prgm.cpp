#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void sub();
void multi();
void divison();
void sqr();
void srt();
void exit();

int  main()
{void add();
	
	

	int opr;
//	display different operation of the calculator

do

{
	cout<<"\n Addtion ";
	cout<<"\n Substraction ";
	cout<<"\n Multiplication ";
	cout<<"\n Division ";
	cout<<"\n Square ";
	cout<<"\n Square Root";
	cout<<"\n Exit ";
	
	cin>>opr;
	
	
	switch(opr)
	{
		case 1:
			add();
			break;
			
		case 2:
			sub();
			break;
			
		case 3:
			multi();
			break;
			
		case 4:
			divison();
			break;
			
		case 5:
			sqr();
			break;
			
		case 6:
			srt();
			break;
			
		case 7:
			exit(0);
			break;
			
			
			default:
				cout<<"\n-----------------\n";
				 break;
				
			
	}while(opr!= 7);
	
	
}
 void  add()
{
	int n , sum=0, number;
	cout<<"How many numbers you want to add:";
	cin>>n;
	cout<<"Please eneter the number one by one: \n";
	for(int i=1; i<=n; i++)
	{
		cin>>number ;
		sum =sum +number;
		
	}
	cout<<"\n Sum of the numbers = "<<sum;
	
}

void sub()
{
	int num1 , num2, z;
	cout<<"\n Enter the First number= ";
	cin>>num1;
	
	cout<<"Enter the Second number= ";
	cin>>num2;
	
	z=num1 -num2;
	
	cout<<"\n Subtraction of the number= ">>z;
	
}
	
}









