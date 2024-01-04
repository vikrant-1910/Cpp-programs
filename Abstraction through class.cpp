#include<iostream>
using namespace std;
class abstractionDemo
{
	private:
		int x,y;
		public:
			void add()
			{
				cout<<"Enter the value of x and y :";
				cin>>x>>y;
				cout<<x+y;
			}
};
main()
{
	abstractionDemo ad;
	ad.add();
}
