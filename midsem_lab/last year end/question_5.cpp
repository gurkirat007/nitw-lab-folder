
#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int array[n];
	for(int i = 0; i<n; i++){
		cin>>array[i];
	}
	int** ptr_array = new int*[n];
	for(int i = 0; i < n; i++){
		ptr_array[i] = &array[i];  
	}

	//ascending
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-1; j++){
			if(*ptr_array[j+1]<*ptr_array[j]){
				int* temp = ptr_array[j+1];
				ptr_array[j+1] = ptr_array[j];
				ptr_array[j] = temp;	
			}
		}
	}

	//descending
	int** ptr_array_1 = new int*[n];
	for(int i = 0; i < n; i++){
		ptr_array_1[i] = &array[i];  
	}
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-1; j++){
			if(*ptr_array_1[j+1]>*ptr_array_1[j]){
				int* temp = ptr_array_1[j+1];
				ptr_array_1[j+1] = ptr_array_1[j];
				ptr_array_1[j] = temp;
			}
		}
	}



	//original array
	for(int i = 0; i<n; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//ascending
	for(int i = 0; i< n; i++){
		cout<<*ptr_array[i]<<" ";  
	}
	cout<<endl;
	//descending
	for(int i = 0; i< n; i++){
		cout<<*ptr_array_1[i]<<" ";  
	}
	cout<<endl;



}