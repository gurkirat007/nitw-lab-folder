#include <iostream>
#include <cmath>
using namespace std;

int num_digits(int i);

bool check_kaprekar(int i);

int main(void){
	int start;
	int end;
	cin>>start>>end;
	for(int i = start; i<=end; i++){
		if(check_kaprekar(pow(i,2)) == true){
			cout<<i<<endl;
		}
	}

}


int num_digits(int i){
	int counter = 0;
	while(i != 0){
		i = i/10;
		counter++;
	}
	return counter;
}

bool check_kaprekar(int i){
	int number_of_digits = num_digits(i);
	if(number_of_digits % 2 == 0){
		int first_half = 0;
		int temp = i;
		for(int j = 0; j<number_of_digits/2; j++){
			first_half += (i%10)*pow(10,j);
			i = i/10;
		}	
		if(first_half + i == pow(temp, 0.5)){
			return true;
		}
	}
	return false;
}