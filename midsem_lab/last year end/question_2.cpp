#include <iostream>
using namespace std;

bool check_digit(int i, int digit);


int main(void){
	int start;
	int end;
	int digit;
	cin>>start>>end>>digit;
	for(int i = start; i <= end; i++){
		if(i % 100 == 0){
			if(i % 400 == 0){
				if(check_digit(i, digit) == true){
					cout<<i<<endl;
				}
			}
		}
		else{
			if(i % 4 == 0){
				if(check_digit(i, digit) == true){
					cout<<i<<endl;
				}
			}
		}
	}
	return 0;
}



bool check_digit(int i, int digit){
	while(i != 0){
		if(i % 10 == digit){
			return true;
		}
		i = i/10;
	}
	return false;
}