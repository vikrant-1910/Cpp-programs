#include<iostream>
using namespace std;
class Grandfather
{
	public:
		void land()
		{
			cout<<"100 Acres of Land";
		}
};
class Father : public Grandfather
{
	public:
		void house()
		{
			cout<<"\n5 BHK House";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"\nAudi Car";
		}
};
main()
{
	Son o;
	o.land();
	o.house();
	o.car();
}
