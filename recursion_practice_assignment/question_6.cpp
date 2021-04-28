#include <iostream>
using namespace std;

int sum_of_digits(int number, int sum);


int main(void){
	int number = 0;
	int sum = 0;
	cin>>number;
	cout<<sum_of_digits(number, sum)<<endl;
}


int sum_of_digits(int number, int sum){
	sum = sum + number%10;
	if(number == 0){
		return sum;
	}
	return sum_of_digits(number/10, sum);
}