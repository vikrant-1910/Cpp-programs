#include<iostream>
using namespace std;
class Cricketer
{
	public:
		void runs()
		{
			cout<<"Total runs are 300";
		}
};
class Batsman : public Cricketer
{
	public:
		void score()
		{
			cout<<"\nBatsman score is 105";
		}
};
main()
{
	Batsman o;
	o.runs();
	o.score();
}
