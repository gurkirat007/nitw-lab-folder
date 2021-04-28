#include <iostream>
using namespace std;

int main(void){
	int length{};
	int k{};
	cin>>length>>k;

	int array[length]{};
	for(int i = 0; i<length; i++){
		cin>>array[i];
	}
	int sum_arr[length-k+1];
	for(int i = 0; i<=length-k; i++){
		int sum = 0;
		for(int j = i; j<i+k; j++){
			sum += array[j];
		}
		sum_arr[i] = sum;
	}
	int maxi = sum_arr[0];
	for(int i = 0; i<=length-k; i++){
		maxi = max(maxi, sum_arr[i]);
	}
	cout<<maxi<<endl;
	return 0;
}