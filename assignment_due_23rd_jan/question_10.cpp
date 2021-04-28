#include <iostream>
using namespace std;

int main(void){
	int rows=5;
	int columns=5;
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			if(i==0 || j==0 || j==columns-1 || i==rows-1){
				cout<<"1";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}