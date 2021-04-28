#include <iostream>
using namespace std;

int mod(int x, int y);

int main(void){
	int rows=5;
	int columns=2*rows-1;
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			int mid=(columns-1)/2;
			int difference=mod(j, mid);
			if(i+j<rows-1 || j-i>=rows){
				cout<<" ";
			}
			else if(i==0){
				cout<<i+1;
			}
			else if(j==mid){
				cout<<0;
			}
			else{
				cout<<difference;
			}
		}
		cout<<endl;
	}
	return 0;
}


int mod(int x, int y){
	if(x-y>=0){
		return x-y; 
	}
	else{
		return y-x;
	}
}