#include <iostream>
using namespace std;

int main(void){
	string array[10];
	for(int i = 0; i<10; i++){
		cin>>array[i];
		
		if(array[i] == "#"){
			break;
		}
	}
	int i;
	for(i = 0; i<10; i++){
		if(array[i][array[i].size()-1] == array[i+1][0]){
			cout<<array[i]<<endl;
		}
		else{
			break;
		}
	}
	if(array[i-1][array[i-1].size()-1] == array[i][0]){
			cout<<array[i]<<endl;
		}
	return 0;

}