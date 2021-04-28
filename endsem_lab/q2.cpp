#include <iostream>
#include <cmath>
using namespace std;

int base_n1_to_n2(int number, int n1, int n2);


int main(void){
	int num_1;
	int num_2;
	cin>>num_1>>num_2;
	num_1 = base_n1_to_n2(num_1, 6, 10);
	num_2 = base_n1_to_n2(num_2, 6, 10);
	int num_3 = num_1 + num_2;
	num_3 = base_n1_to_n2(num_3, 10, 6);
	cout<< num_3<<endl;
}



int base_n1_to_n2(int number, int n1, int n2){
	int sum = 0;
	int i = 0;
	while(number != 0){
		sum += pow(n1, i) * (number % n2);
		number = number / n2;
		i++;
	}
	return sum;
}

