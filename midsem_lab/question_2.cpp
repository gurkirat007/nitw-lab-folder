#include <iostream>
using namespace std;

int main(void){
	int num_of_person;
	cout<<"Enter the number of person"<<endl;
	cin>>num_of_person;
	int array_times[num_of_person];
	for(int i = 0; i< num_of_person; i++){
		cout<<"Enter the time taken by person "<<i+10<<" : ";
		cin>>array_times[i];
	}
	int temp;
	for(int i = 0; i<num_of_person-1; i++){
		for(int j = 0; j<num_of_person-1; j++){
			if(array_times[j+1]<array_times[j]){
				temp = array_times[j+1];
				array_times[j+1] = array_times[j];
				array_times[j] = temp;
			}
		}
	}
	int min_array[num_of_person/2];
	for(int i = 0; i<num_of_person/2; i++){
		int sum_ti = 0;
		for(int j = 3; j<=num_of_person; j++){
			sum_ti += array_times[j];
		}
		int sum_4th_term = 0;
		for(int j = 1; j<=i; j++){
			sum_4th_term += array_times[num_of_person+1-2*j];
		}
		min_array[i] = (num_of_person-2-i) * array_times[0] + (2*i+1) * array_times[1] + sum_ti - sum_4th_term;
	}
	int min_time = min_array[0];
	for(int i = 0; i<num_of_person/2; i++){
		cout<<min_array[i];
		min_time = min(min_time, min_array[i]);
	}
	cout<<min_time<<endl;
	return 0;
}