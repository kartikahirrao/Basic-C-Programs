#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the value of number choise whose multiplication is to be printed"<<endl;
	
	cin>>num;
	
	for(int i=1; i<=10; i++)
	{
		cout<<num<<"X"<<i<<"="<<i*num<<endl;
	}
	return 0;
	
}
