#include<iostream>
using namespace std;
main()
{
	int i,num,f=1;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	cout<<"\nFactorial of given number is "<<f;
}
