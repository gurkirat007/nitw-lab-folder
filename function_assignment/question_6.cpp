#include <iostream>
using namespace std;


void MaxFinder(int array[], int length);
int MaxCount(int array[],int length);



int main(){
 	int array[100],length,i;
 	cout<<"Enter the number of values to be entered - ";
 	cin>>length;
 	for(i=0;i<length;i++){
 		cout<<"Enter Value of Array at position "<<i+1<<" - ";
 		cin>>array[i];
 	}
 	MaxFinder(array,length);
 	cout<<"Largest number is "<<array[0]<<" and it appears "<<MaxCount(array,length)<<" times.";
 	return 0;
}


void MaxFinder(int array[],int length){
 	for(int i=0;i<length-1;i++){
 		for(int j=0;j<length-i-1;j++){
 			if(array[j]<array[j+1]){
 			int temp = array[j];
 			array[j] = array[j+1];
 			array[j+1] = temp;
 			}
 		}
 	}
}


int MaxCount(int array[],int length){
	 int count = 1;
	 for(int i=1;i<length;i++){
 	 	if(array[0] == array[i]){
 			count++;
 		}
 	 }
	 return count;
}