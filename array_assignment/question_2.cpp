#include <iostream>
using namespace std;

int check_1(int array[], int size_of_array);

int main(void){
	int size_of_array;
	cin >> size_of_array;
	int array[size_of_array+1];
	for(int i=1; i<=size_of_array; i++){
		cin>>array[i];
	}
	array[0]=0;
	if(check_1(array, size_of_array) % 2 == 0){
		array[0]=0;
	}
	else{
		array[0]=1;
	}
	for(int i=0; i<=size_of_array; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
}

int check_1(int array[], int size_of_array){
	int counter=0;
	for(int i=1; i<=size_of_array; i++){
		if(array[i]==1){
			counter++;
		}
	}
	return counter;
}