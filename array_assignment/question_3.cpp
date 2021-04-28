#include <iostream>
using namespace std;

int main(void){
	int length=5;
	int code[length];
	code[1]=4;
	code[0]=2*code[1]+1;
	code[3]=1+code[1];
	code[2]=10-code[1];
	code[4]=code[1]+4;
	for(int i=0; i<length; i++){
		cout<<code[i]<<" ";
	}
	cout<<endl;
	
}