#include <iostream>
using namespace std;

int main(void){
	int rows=5;
	int columns=9;
	for(int j=0; j<rows; j++){
		for(int i=0; i<columns; i++){
			if(i<j){
				cout<<" ";
			}
			else if(i+j>=9){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}