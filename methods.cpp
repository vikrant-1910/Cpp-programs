#include<iostream>
using namespace std;
class student
{
	public:
		int id;			// Data member
		string name;
		string subject;
		
		void inputData()  	// member function
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter subject"<<endl;
			cin>>subject;
		}
		void displayData()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Subject:"<<subject<<endl;
		}
};
class Faculty
{
	public:
		int id;
		string name;
		string department;
		
		void inputData()
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter department:"<<endl;
			cin>>department;
		}
		void displayData()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Department:"<<department;
		}
};
main()
{
	//Object creation
	student obj;
	Faculty fobj;
	
	obj.inputData();
	obj.displayData();
	
	fobj.inputData();
	fobj.displayData();
}
