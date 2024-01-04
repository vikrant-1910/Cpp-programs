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
			cout<<a+b;
		}
};
main()
{
	overloadingDemo od;
	od.add(10,20);
	od.add(12.56f,78.90f);
}
