#include<iostream>
using namespace std;
class Company
{
	public:
		string name;
		string address;
		int sales;
		int turnover;
		
		void inputData()
		{
			cout<<"Enter company name:"<<endl;
			cin>>name;
			cout<<"Enter company address:"<<endl;
			cin>>address;
			cout<<"Enter company sales:"<<endl;
			cin>>sales;
			cout<<"Enter company turnover"<<endl;
			cin>>turnover;
		}
		void displayData()
		{
			cout<<"Company Name:"<<name<<endl;
			cout<<"Company Address:"<<address<<endl;
			cout<<"Company Sales:"<<sales<<endl;
			cout<<"Company Turnover:"<<turnover<<endl;
		}
};
class Employee
{
	public:
		int id;
		string name;
		string department;
		int salary;
		int bonus;
		
		void inputData()
		{
			cout<<"Enter employee id:"<<endl;
			cin>>id;
			cout<<"Enter employee name"<<endl;
			cin>>name;
			cout<<"Enter employee department:"<<endl;
			cin>>department;
			cout<<"Enter employee salary:"<<endl;
			cin>>salary;
			cout<<"Enter employee bonus"<<endl;
			cin>>bonus;
		}
		void displayData()
		{
			cout<<"Employee ID:"<<id<<endl;
			cout<<"Employee Name:"<<name<<endl;
			cout<<"Employee Department:"<<department<<endl;
			cout<<"Employee Salary:"<<salary<<endl;
			cout<<"Employee Bonus:"<<bonus;
		}
};
main()
{
	Company obj;
	Employee eobj;
	
	obj.inputData();
	obj.displayData();
	
	eobj.inputData();
	eobj.displayData();
}
	
		
		
