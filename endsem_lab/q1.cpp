#include <iostream>
using namespace std;

int main(void){
	int num_matchstick_taken = 0;
	int pick;
	int comp_pick;
	while(num_matchstick_taken < 57){
		cin>>pick;
		comp_pick = 7 - pick;
		num_matchstick_taken += pick;
		num_matchstick_taken += comp_pick;
		if(num_matchstick_taken == 56){
			break;
		}

	}
	cout<<num_matchstick_taken<<endl;
	cout << 57 - num_matchstick_taken<<" matchsticks left"<<endl; 
	return 0;
}