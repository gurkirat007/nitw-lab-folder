#include <iostream>
using namespace std;


int sum(int start, int end, int add);



int main(void){
	int start = 1;
	int end = 0;
	int add = 0;
	cin>>end;
	cout<<"The sum of numbers from "<<start<<" to "<<end<<" : "<<sum(start, end, add)<<endl;
}



int sum(int start, int end, int add){
	add = add + start;
	if(start == end){
		return add;
	}
	return sum(start+1, end, add);
}