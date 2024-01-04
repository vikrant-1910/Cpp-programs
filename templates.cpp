#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T temp=a;
	  a=b;
	  b=temp;
}
main()
{
	char a='A', b='B';
	int x=10,y=20;
	
	cout<<"Before swapping"<<"A:"<<a<<"B:"<<b;
	swapping(a,b);
	cout<<"\nAfter swapping:"<<"A:"<<a<<"B:"<<b;
	
	cout<<"\nBefore swapping"<<"X:"<<x<<"Y:"<<y;
	swapping(x,y);
	cout<<"\nAfter swapping:"<<"X:"<<x<<"Y:"<<y;
}
