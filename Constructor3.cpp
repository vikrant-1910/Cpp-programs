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
		Student(float c, float d)
		{
			cout<<"\nMultiplication:"<<c*d;
		}
};
main()
{
	// Object creation
	Student s1;
	Student s2(20,30);
	Student s3(11.2f,10.5f);
}
