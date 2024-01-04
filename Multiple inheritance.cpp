#include<iostream>
using namespace std;
class Papa
{
	public:
		void house()
		{
			cout<<"4 BHK House";
		}
};
class Kaka
{
	public:
		void shop()
		{
			cout<<"\nGrocery shop";
		}
};
class Son : public Papa,public Kaka
{
	public:
		void car()
		{
			cout<<"\nBMW Car";
		}
};
main()
{
	Son obj1;
	obj1.house();
	obj1.shop();
	obj1.car();
}
