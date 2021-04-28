#include <iostream>
using namespace std;


int main(void){
	int number;
	cout<<"enter a number"<<endl;
	cin>>number;
	if(number<50){
		cout<<"number is less than 50"<<endl;
	}
	else if(number>10){
		cout<<"number is greater than 10"<<endl;
	}
	else{
		cout<<"enter value between 10 and 50"<<endl;
	}
	return 0;
}