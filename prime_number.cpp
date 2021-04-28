#include <iostream>
using namespace std;

int main(void){
	int upper_bound;
	cout<<"please write the upper bound"<<endl;
	cin>>upper_bound;
	
	for(int i=2; i<=upper_bound; i++){
		int count=0;
		for(int j=2; j<i; j++){
			if(i%j==0){
				count++;
				break;
			}

		}
		if(count==0){
			cout<<i<<endl;
		}
	}
}