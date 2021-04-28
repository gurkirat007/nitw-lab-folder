//incomplete
#include <iostream>
using namespace std;

bool num_1_greater_num_2(int number_1, int number_2);

int main(void){
	int number_1 = 0;
	int number_2 = 0;
	cin>>number_1;
	int counter = 0;
	int max_counter = 0;
	while(number_2 != -1){
		cin>>number_2;
		if(num_1_greater_num_2(number_1, number_2) == true){
			counter++;
		}
		max_counter = max(counter, max_counter);
		if(num_1_greater_num_2(number_1, number_2) == false){
			counter = 0;
		}
		number_1 = number_2;	
		
	}
	cout<<max_counter<<endl;
	return 0;
}


bool num_1_greater_num_2(int number_1, int number_2){
	if (number_1 >= number_2){
		return true;
	}
	else{
		return false;
	}
}

