#include<iostream>
using namespace std;

int main()
{
	int *p;
	int arr[5];
	p = arr;
	cout<<"enter the elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>p[i];	
	}
	cout<<"you entered:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	return 0;
}
