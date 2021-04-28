#include <iostream>
using namespace std;

int main(void){
	int length;
	cin>>length;
	int ith_largest;
	int jth_smallest;
	cin>>ith_largest>>jth_smallest;
	if (ith_largest>length || jth_smallest>length){
		cout<<"enter valid number"<<endl;
		return 1;
	}
	int array[length];
	for(int i=0; i<length; i++){
		cin>>array[i];
	}
	for(int i=0; i<length; i++){
		for(int j= i+1; j<length; j++) {
			if(array[j]<array[i]){
				int temp= array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}

		
	}

	cout<<"ith largest element is: "<<array[length-ith_largest]<<endl;
	cout<<"jth smallest element is: "<<array[jth_smallest-1]<<endl;
	
	return 0;
}