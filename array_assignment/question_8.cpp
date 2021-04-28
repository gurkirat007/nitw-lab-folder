//incomplete
#include <iostream>
using namespace std;

int main(void){
	int length;
	cin>>length;
	int array[length];
	for(int i=0; i<length; i++){
		cin>>array[i];
	}
	for(int i=0; i<length; i++){
		int counter=0;
		if(i==0){
			if(array[i]>array[i+1]){
				counter++;
			}
		}
		else if(i==length-1){
			if(array[i]>array[i-1]){
				counter++;
			}
		}
		else{
			if(array[i]>array[i+1] && array[i]>array[i-1]){
				counter++;
			}
		}
		if(counter>0){
			cout<<array[i]<<endl;
		}

	}
	return 0;
}