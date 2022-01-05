#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Input the size of arry: "<<endl;
 cin>>n;
 
 int a[n];
 memset(a,0, sizeof(a)); // here only 0 and -1 can fit in the array 
 cout<<a[2]<<endl;
 
 
 
    return 0;
    
}
