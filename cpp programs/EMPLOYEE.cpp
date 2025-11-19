#include<iostream>
#include<string>
using namespace std;
class Employee{
	protected:
	string name;
	int employeeID;
	public:
		Employee(string n, int eID)
		{
			name=n;
			employeeID=eID;
		}
		virtual void displayDetails()
		{
			cout<<"employee name: "<<name;
			cout<<"employee ID: "<<employeeID;
		}
};
class Manager:public Employee{
	string dept;
	public:
	Manager(string n, int eID, string department):Employee(n,eID){
		dept=department;
	}
	void displayDetails()
	{
		cout<<"manager name: "<<name;
		cout<<"manager  ID: "<<employeeID;
		cout<<"\ndepartment: "<<dept;
	}
};
int main()
{
	Employee emp("Srijita Biswas\n",1417);
	Manager mgr("Ritwija Biswas\n",1470,"HR");
	cout<<"employee details:\n"<<endl;
	emp.displayDetails();
	cout<<endl;
	cout<<"manager details:\n"<<endl;
	mgr.displayDetails();
	return 0;
}
