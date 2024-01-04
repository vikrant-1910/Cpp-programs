#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		string subject;
		
		void setID(int id)
		{
			this ->id = id;
		}
		int getID()
		{
			return this ->id;
		}
		void setName(string name)
		{
			this -> name= name;
		}
		string getName()
		{
			return this ->name;
		}		
};
main()
{
	Student s2;
	s2.setID(1);
	cout<<s2.getID();
	
	s2.setName("\nVikrant");
	cout<<s2.getName();
}
