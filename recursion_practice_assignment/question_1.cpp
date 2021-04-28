#include <iostream>
using namespace std;

int natural_numbers(int n, int end);	

int main(void){
	cout<<"The natural numbers are :";
	int n = 1;
	int end = 50;
	natural_numbers(n, end);
	return 0;
}


int natural_numbers(int n, int end){
	cout<<n<<" ";
	if(n == end){
		cout<<n<<endl;
		return n;
	}
	return natural_numbers(n+1, end);
}