#include<iostream>
using namespace std;
int main()
{
	int a[10][10] , b[10][10] , multi[10][10];
	int r,c,i,j,k;
	
	
	cout<<"enter the nuber of row = ";
	cin>>r;
	
	cout<<"enter the umber of column = ";
	cin>>c;
	
	cout<<"enter the first matrix elemen = \n";
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"enter the second matrix element=\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"multiplay of the matrix= \n";
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			multi[i][j]=0;
			
			for(k=0; k<c; k++)
			{
				multi[i][j]+=  a[i][j]*b[k][j];
			}
		}
	}
	
//	for printing result

for(i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		cout<<multi[i][j] <<" ";
	}
	cout<<"\n";
}

return 0;
} 
