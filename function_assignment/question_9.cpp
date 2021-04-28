#include <iostream>
using namespace std;

int element_picker(int array_1[], int array_2[], int number, int length_1, int length_2);

int main(void){
	int length_1;
	int length_2;
	cout<<"Length of array 1"<<endl;
	cin>>length_1;
	cout<<"Length of array 2"<<endl;
	cin>>length_2;
	int array_1[length_1];
	int array_2[length_2];
	cout<<"Enter elements of array 1 as space separated integers"<<endl;
	for(int i=0; i<length_1; i++){
		cin>>array_1[i];
	}
	cout<<"Enter elements of array 2 as space separated integers"<<endl;
	for(int i=0; i<length_2; i++){
		cin>>array_2[i];
	}
	int result_array[length_1+length_2];
	for(int i=0; i<length_1+length_2; i++){
		result_array[i] = element_picker(array_1, array_2, i, length_1, length_2);
	}
	cout<<"resultant array is"<<endl;
	for(int i=0; i<length_1+length_2; i++){
		cout<<result_array[i]<<" ";
	}
	cout<<endl;
	return 0;
}



int element_picker(int array_1[], int array_2[], int number, int length_1, int length_2){
	if(length_1<=length_2){
		if(number < 2*length_1){
			if(number%2 == 0){
				return array_1[number/2];
			}
			else{
				return array_2[(number-1)/2];
			}
		}
		else{
			return array_2[(number-length_1)];
		}
	}
	else{
		if(number < 2*length_2){
			if(number%2 == 0){
				return array_1[number/2];
			}
			else{
				return array_2[(number-1)/2];
			}
		}
		else{
			return array_1[(number-length_2)];
		}
	}
}