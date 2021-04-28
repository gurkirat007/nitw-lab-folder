#include <iostream>
using namespace std;

int array_completer(int i, int num_of_people, int array_time[]);

int main(void){
	int num_of_people;
	int array_time[num_of_people];
	for(int i = 0; i<num_of_people; i++){
		cin>>array_time[i];
	}
	int min_array[num_of_people/2];
	for(int i = 0; i<num_of_people/2; i++){
		min_array[i] = array_completer(i, num_of_people, array_time);
	}

}


int array_completer(int i, int num_of_people, int array_time[]){
	int sum_ti = 0;
	for(int j = 2; j<num_of_people; j++){
		sum_ti += array_time[i];
	}
	int fourth_term = 0;
	for(int j = 0; j<i; j++){
		fourth_term += array_time[num_of_people+i-2*j];
	}
	return (num_of_people-2-i)*array_time[0] + (2*i+1)*array_time[1] + sum_ti - fourth_term;
}