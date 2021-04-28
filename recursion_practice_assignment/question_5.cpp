#include <iostream>
using namespace std;

int number_of_digit(int number, int n);


int main(void){
	int number = 0;
	int n = 0;
	cin>>number;
	cout<<number_of_digit(number, n)<<endl;
}


int number_of_digit(int number, int n){
	if(number == 0){
		return n;
	}
	return number_of_digit(number/10, n+1);
}