#include <iostream>
using namespace std;

int main(void){
	//initialise variables and taking inputs
	int s;
	cout<<"Enter Shubham's strength"<<endl;
	cin>>s;
	int s_constant = s;
	int num_enemies;
	cout<<"Enter number of enemies"<<endl;
	cin>>num_enemies;
	int strength_array[num_enemies];
	for(int i = 0; i<num_enemies; i++){
		cout<<"Enter strength for "<< i+1<<" Enemy"<<endl;
		cin>>strength_array[i];
	}
	// sorting strength array
	for(int i = 0; i<num_enemies-1; i++){
		for(int j = 0; j<num_enemies-1; j++){
			if(strength_array[j+1]<strength_array[j]){
				int temp = strength_array[j+1];
				strength_array[j+1] = strength_array[j];
				strength_array[j] = temp;
			}
		}
	}
	//adding the strength of s with each win
	for(int i = 0; i<num_enemies; i++){
		if(s >= strength_array[i]){
			s += strength_array[i];
		}
		else{
			break;
		}
	}
	int sum_of_strengths = 0;
	//checking if all matches are won
	for(int i = 0; i<num_enemies; i++){
		sum_of_strengths += strength_array[i];
	}
	//displaying outcomes
	if(sum_of_strengths + s_constant == s){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}