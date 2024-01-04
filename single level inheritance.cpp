#include<iostream>
using namespace std;
class Father
{
	public:
		void house()
		{
			cout<<"3 BHK House";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"\nMercedes Car";
		}
};
main()
{
	Son obj;
	obj.house();
	obj.car();
}
