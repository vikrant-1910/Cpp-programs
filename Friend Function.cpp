#include<iostream>
using namespace std;
class Test
{
	private:
		int x;
		
	protected:
		int y;
		
	public:
		int z;
		
	friend void myFun();			
};
void myFun()
{
	Test t;
	t.x=56;
	t.y=12;
	t.z=78;
	
	cout<<"X:"<<t.x<<endl;
	cout<<"Y:"<<t.y<<endl;
	cout<<"Z:"<<t.z;
}
main()
{
	myFun();
}
