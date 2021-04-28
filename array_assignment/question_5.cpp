#include <iostream>
using namespace std;

int main(void){
	int length;
	cout<<"Input the number of elements to be stored in the array: ";
	cin>>length;
	cout<<endl;
	int array[length];
	for(int i=0; i<length; i++){
		cout<<"element - "<<i<<" : ";
		cin>>array[i];
		cout<<endl;
	}
	int number_of_zeroes=0;
	for(int i=0; i<length; i++){
		if(array[i]==0){
			number_of_zeroes++;
		}
	}
	if(number_of_zeroes>0){
		cout<<"0 occurs "<<number_of_zeroes<<" times"<<endl;
	}
	for(int i=0; i<length; i++){
		int counter=1;
		if(array[i]!=0){
			for(int j=0; j<length; j++){
				if(array[i] == array[j] && i!=j){
					counter++;
					array[j] = 0;
				}
			}
		}
		else{
			continue;
		}
		cout<<array[i]<<" occurs "<<counter<<" times"<<endl;

	}
}