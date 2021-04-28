#include <iostream>
#include <cmath>
using namespace std;

struct BankDeposit{
	float deposit_in_bank;
	int tenure;
};

struct Dates{
	int date;
	int month;
	int year;
};

int main(void){

	Dates dob;
	Dates* ptr_dob;
	ptr_dob = &dob;

	Dates deposits;
	Dates* ptr_deposits;
	ptr_deposits = &deposits;

	BankDeposit first_deposit;
	BankDeposit* ptr_first_deposit;
	ptr_first_deposit = &first_deposit;

	cout<<"Enter date of birth in form of DD MM YYYY"<<endl;
	cin>>ptr_dob -> date>>ptr_dob -> month>>ptr_dob -> year;

	cout<<"Enter date of deposit in form of DD MM YYYY"<<endl;
	cin>>ptr_deposits -> date>>ptr_deposits -> month>>ptr_deposits -> year;

	cout<<"Enter amount"<<endl;
	cin>>ptr_first_deposit -> deposit_in_bank;
	cout<<"Enter tenure"<<endl;
	cin>>ptr_first_deposit -> tenure;

	float interest_rate;
	int age;

	if(ptr_deposits -> year - ptr_dob -> year > 60){
		interest_rate = 9;
		age = ptr_deposits -> year - ptr_dob -> year;
	}
	else if(ptr_deposits -> year - ptr_dob -> year == 60){
		if(ptr_deposits -> month > ptr_dob -> month){
			interest_rate = 9;
			age = ptr_deposits -> year - ptr_dob -> year;
		}
		else if(ptr_deposits -> month < ptr_dob -> month){
			interest_rate = 8;
			age = ptr_deposits -> year - ptr_dob -> year - 1;
		}
		else{
			if(ptr_deposits -> date > ptr_dob -> date){
				interest_rate = 9;
				age = ptr_deposits -> year - ptr_dob -> year;
			}
			else if(ptr_deposits -> date < ptr_dob -> date){
				interest_rate = 8;
				age = ptr_deposits -> year - ptr_dob -> year - 1;
			}
			else{
				interest_rate = 9;
				age = ptr_deposits -> year - ptr_dob -> year;
			}
		}

	}
	else{
		interest_rate = 8;
		age = ptr_deposits -> year - ptr_dob -> year;
	}

	double amount = (ptr_first_deposit -> deposit_in_bank)*pow(1+interest_rate/100, ptr_first_deposit -> tenure);
	cout<<"Age: "<<age<<endl;
	cout<<"interest_rate: "<<interest_rate<<endl;
	cout<<"Amount: "<<amount<<endl;

	return 0;

}