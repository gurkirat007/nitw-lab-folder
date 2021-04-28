#include <iostream>
using namespace std;

int GCD(int number_1, int number_2, int n);


int main(void){
	int number_1 = 0;
	int number_2 = 0;
	cout<<"Input 1st number: ";
	cin>>number_1;
	cout<<"Input 2nd number: ";
	cin>>number_2;
	int n = min(number_2, number_1);
	cout<<GCD(number_1, number_2, n)<<endl;
	return 0;
}



int GCD(int number_1, int number_2, int n){
	if(number_2%n == 0 && number_1%n == 0){
		return n;
	}
	return GCD(number_1, number_2, n-1);
}