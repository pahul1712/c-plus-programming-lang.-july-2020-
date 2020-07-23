#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<< " enter your age: " ;
	cin >> age;
	
	if(age>=18)
	{
		cout << "\nyou are eligible to vote" ;
	}
	else if(age>0 && age<18)
	{
		cout<<"\nyou are not eligible to vote" ;
	}
	else
	    cout<<"\nInvalid age";
	    
return 0;
	    
}
