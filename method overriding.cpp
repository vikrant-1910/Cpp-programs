#include<iostream>
using namespace std;
class Parent
{
	public:
		void mobile()
		{
			cout<<"Samsung s23 phone";
		}
};
class Child : public Parent
{
	public:
		void mobile()
		{
			Parent::mobile();	// scope resolution operator
			cout<<"\nSamsung galaxy phone";
		}
};
main()
{
	Child c1;
	c1.mobile();
}
