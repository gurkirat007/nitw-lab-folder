#include <iostream>
using namespace std;

int array_addition(int array[], int n, int number_of_elements);



int main(void){
	int n = 0;
	int number_of_elements = 0;
	cout<<"Input the number of elements to be stored in the array : ";
	cin>>number_of_elements;
	int array[number_of_elements];
	array_addition(array, n, number_of_elements);
	for(int i = 0; i<number_of_elements; i++){
		cout<<"element - "<<i<<" : "<<array[i]<<endl;;
	}
	return 0;
}

int array_addition(int array[], int n, int number_of_elements){
	if(n == number_of_elements){
		return 0;
	}
	array[n] = 2 * n + 2;
	return array_addition(array, n+1, number_of_elements);
}