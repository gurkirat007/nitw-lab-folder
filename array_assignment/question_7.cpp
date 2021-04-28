#include <iostream>
using namespace std;

int main(void){
	int length;
	cin>>length;
	int difference;
	cout<<"Enter difference: ";
	cin>>difference;
	int array[length];
	for(int i=0; i<length; i++){
		cin>>array[i];
	}	
	int counter=0;
	for(int i=0; i<length; i++){
		for(int j=i; j<length; j++){
			if(difference==abs(array[i]-array[j])){
				cout<<"["<<array[i]<<","<<array[j]<<"]"<<endl;
				counter++;
			}
		}
	}
	cout<<"NUmber of distinct pairs for difference "<<difference<<" are "<<counter<<endl;

}