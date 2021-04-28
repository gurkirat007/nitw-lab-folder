#include <iostream>
#include <cmath>
using namespace std;


int main(void){
	int i = 2025;
	int number_of_digits = 4;
	int first_half = 0;
	
	for(int j = 0; j<number_of_digits/2; j++){
		first_half += (i%10)*pow(10,j);
		i = i/10;
	}
	cout<<first_half<<endl;
	cout<<i<<endl;
}