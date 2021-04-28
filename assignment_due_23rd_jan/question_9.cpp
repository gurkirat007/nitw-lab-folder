#include <iostream>
using namespace std;
int main(void){
	int rows=5;

	for(int i=rows, k=0; i>0; i--, k++){
		for(int j=0; j<i; j++){
			//using ascii table
			cout<<char(j+k+65)<<" ";
		}
		cout<<endl;
	}
	return 0;
}