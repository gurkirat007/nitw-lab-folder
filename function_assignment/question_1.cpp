#include <iostream>
using namespace std;

int check_perfection(int array[], int n);

int main(void){
	int number = 20;
	int array[number];
	for(int i = 0; i<number; i++){
		cin>>array[i];
	}	
	if(check_perfection(array, number)==0){
		cout<<"perfect list"<<endl;
	}
	else{
		cout<<"it isn\'t a perfect list"<<endl;
	}
}



int check_perfection(int array[], int n){
	int check_perfection=0;
	int maximum=array[0];
	int position_of_maximum = 0;
	for(int i=1; i < n; i++){
		maximum = max(array[i], maximum);
		if(array[i]==maximum){
			position_of_maximum=i;
		}
	}
	for(int i = position_of_maximum + 1; i<n-1; i++){
		if(array[i]<=array[i+1]){
			check_perfection++;
		}
	}
	for(int i = 0; i<position_of_maximum; i++){
		if(array[i] != maximum){
			if(array[i] >= array[i+1]){
				check_perfection++;
			}
		}
		if(array[i] == maximum){
			if(array[i] > array[i+1]){
				check_perfection++;
			}
			else if(array[i] < array [i+1]){
				check_perfection++;
			}
		}
	}
	return check_perfection;
}