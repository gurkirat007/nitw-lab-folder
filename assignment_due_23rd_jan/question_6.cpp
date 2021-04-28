#include <iostream>
using namespace std;

int main(void){
	int row=4;
	for(int i=0; i<row; i++){
		for(int j=0; j<=i; j++){
			if(j!=0){
				cout<<"*";
			}
			cout<<i+1;

		}
		cout<<endl;
	}
	for(int i=row; i>0; i--){
		for(int j=0; j<i; j++){
			if(j!=0){
				cout<<"*";
			}
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}