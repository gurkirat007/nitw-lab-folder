#include <iostream>
using namespace std;

int fibonacci(int first_number, int second_number, int n);

int main(void){
	int first_number = 1;
	int second_number = 1;
	int n;
	cout<<"How many terms? ";
	cin>>n;
	cout<<first_number<<" "<<second_number<<" ";


	fibonacci(first_number, second_number, n-2);
	cout<<endl;
	return 0;
}



int fibonacci(int first_number, int second_number, int n){
	int sum = first_number + second_number;
	cout<<sum<<" ";
	
	if(n == 1){
		return sum;
	}
	return fibonacci(second_number, sum, n-1);
}