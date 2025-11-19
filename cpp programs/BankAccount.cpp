#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	int accountNumber;
	string accountHolderName;
	float balance;
	public:
		BankAccount(int accNo, string acchName, float bal)
		{
			accountNumber = accNo;
			accountHolderName=acchName;
			balance=bal;
			cout<<"account created successfully"<<endl;
		}
		~BankAccount()
		{
			cout<<"account for"<< accountHolderName <<"is destroyed"<<endl;
		}
		void deposite(float amt)
		{
			if(amt>0)
			{
			balance+=amt;
			cout<<"successfully deposited"<<amt<<endl;
			}else {
			cout<<"invalid deposite amount"<<endl;
		}
		}
		void withdraw(float amt)
		{
			if(amt>0 && amt<=balance){
			balance -=amt;
			cout<<"successfully withdrawn"<<amt<<endl;
			}else if(amt>balance){
			cout<<"insufficient balance"<<endl;
		}
		}
		void displayAccountDetails()
		{
			cout<<"account number"<<accountNumber<<endl;
			cout<<"account holder name"<<accountHolderName<<endl;
			cout<<"current balance"<<balance<<endl;
		}
};
int main()
{
    BankAccount acc(123456,"Srijita Biswas", 1000.0);
	acc.deposite(500.0);
	acc.withdraw(200.0);
	acc.displayAccountDetails();
	return 0;
}
