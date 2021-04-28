#include <iostream>
using namespace std;

int main(void){
	int rows=10;
	for(int i=0; i<rows; i++){
		for(int j=0; j<=i; j++){
			cout<<(i+1)*(j+1)<<" ";
		}
		cout<<endl;
	}
	return 0;
}