#include<iostream>
using namespace std;
class Student
{
	public:
		Student()		//constructor
		{
			cout<<"Welcome to the Constructor";
		}
		Student(int a, int b)
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
};
main()
{
	// Object creation
	Student s1;
	Student s2(20,30);
}
