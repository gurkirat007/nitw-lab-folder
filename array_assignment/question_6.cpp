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
		if(i!=length-1){
			int maximum = array[i+1];
			for(int j=i+1; j<length; j++){
				maximum = max(array[j], maximum);
			}
			array[i]=maximum;
		}	
		else{
			array[i]=0;
		}
	}
	for(int i=0; i<length; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}