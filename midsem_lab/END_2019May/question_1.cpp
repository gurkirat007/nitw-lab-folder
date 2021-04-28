#include <iostream>
using namespace std;

void swap(int *p1, int i , int j);

int main(void){
	int digits = 4;
	int number_int;
	cin>>number_int;
	int number_arr[digits];
	for(int i = digits-1; i>=0; i--){
		number_arr[i] = number_int%10; 
		number_int = number_int/10;
	}
	for(int i = 0; i<digits; i++){
		number_arr[i] += 7;
		number_arr[i]  = number_arr[i]%10;
	}
	swap(number_arr, 0, 2);
	swap(number_arr, 1, 3);
	for(int i = 0; i<digits; i++){
		cout<<number_arr[i];
	}
	cout<<endl;
}

void swap(int *p1, int i , int j){
	int temp = *(p1+i);
	*(p1+i) = *(p1+j);
	*(p1+j) = temp;
}