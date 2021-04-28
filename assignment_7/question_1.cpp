#include <iostream>
using namespace std;

struct employee{
	float extra_hours;
	int num_of_children;
};

int main(void){
	int num_of_employees;
	float perday_salary = 1200;
	int days = 30;
	float overtime_per_hour = 100;
	float professional_tax = 2;
	float provident_fund = 10;
	float income_tax = 5;
	float child_support = 2;
	cout<<"enter number of employees"<<endl;
	cin>>num_of_employees;
	employee array[num_of_employees];

	for(int i = 0; i<num_of_employees; i++){
		cout<<"Enter number of extra hours worked and number of children as space separated numbers"<<endl;
		cin>>array[i].extra_hours>>array[i].num_of_children;
	}
	for(int i = 0; i<num_of_employees; i++){
		float gross_salary_per_month = perday_salary * days + (array[i].extra_hours*overtime_per_hour);
		float take_home = gross_salary_per_month + (array[i].num_of_children*child_support*gross_salary_per_month/100) - (provident_fund*gross_salary_per_month/100) - (professional_tax*gross_salary_per_month/100) - (income_tax*gross_salary_per_month/100);
		cout<<"Gross monthly salary of employee "<<i+1<<" is: "<<gross_salary_per_month<<endl;
		cout<<"net take-home monthly salary of employee "<<i+1<<" is: "<<take_home<<endl;
	}
	return 0;
}