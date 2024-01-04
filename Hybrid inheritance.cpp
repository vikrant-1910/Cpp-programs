#include<iostream>
using namespace std;
class Child1
{
	public:
		void child1()
		{
			cout<<"\nchild1";
		} 
};
class Child2 : public Child1
{
	public:
		void child2()
		{
			cout<<"\nChild2";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	c1.child1();
	c2.child2();
}
