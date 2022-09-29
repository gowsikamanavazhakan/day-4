#include<iostream>
using namespace std;
int main()
{
	float t,i;
	cout<<"Enter the income:";
	cin>>i;
	if(i<=0)
	{
	    cout<<"INVALID INPUT";
	}
	
	else if (i<=150000)
	{
	   cout<<"NO TAX";	
	}
	else if (i>150000 && i<300000)
	{
		cout<<"TAX:";
		cout<<(i*10)/100;
	}
	else if(i>300000 && i<500000)
	{
		cout<<"TAX:";
		cout<<i*0.02;
	}
	else {
	
	    cout<<"TAX:";
	    cout<<i*0.03;
	    
	}
	
}
