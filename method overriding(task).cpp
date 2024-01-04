#include<iostream>
using namespace std;
class overloadingDemo
{
	public:
		int a,b;
		void add(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void add(float a,float b)
		{
			cout<<a*b<<endl;
		}
		void add(int a,int b,int c)
		{
			cout<<a-b<<endl;
		}
};
main()
{
	overloadingDemo od;
	od.add(10,20);
	od.add(10.2f,11.5f);
	od.add(50,10,2);
}
