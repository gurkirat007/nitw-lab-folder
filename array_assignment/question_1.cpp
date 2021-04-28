#include <iostream>
using namespace std;

int main(void){
	int k = 4;
	int length_of_array=6;
	int array[length_of_array] = {2, 2, 1, 7, 5, 3};
	int counter=0;
	for(int i=0; i<length_of_array; i++){
		for(int j=0; j<length_of_array; j++){
			if(i<=j){
				continue;
			}
			int sum=array[i]+array[j];
			if(sum % k == 0){
				counter++;
			}
		}
	}
	cout<<counter<<endl;
	return 0;
}