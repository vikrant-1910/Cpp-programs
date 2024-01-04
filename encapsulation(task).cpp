#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		string name;
		string department;
		string salary;
		
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
		void setDepartment(string department)
		{
			this -> department = department;
		}
		string getDepartment()
		{
			return this -> department;
		}
		void setSalary(string salary)
		{
			this -> salary = salary;
		}
		string getSalary()
		{
			return this -> salary;
		}				
};
main()
{
	Employee e2;
	e2.setID(1);
	cout<<e2.getID();
	
	e2.setName("\nvikrant");
	cout<<e2.getName();
	
	e2.setDepartment("\nComputer");
	cout<<e2.getDepartment();
	
	e2.setSalary("\n50000");
	cout<<e2.getSalary();
}
