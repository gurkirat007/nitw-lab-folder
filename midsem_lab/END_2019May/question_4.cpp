#include <iostream>
using namespace std;



int main(void){
	int x;
	cin>>x;
	for(int i = 0; i <= x; i++){
		int counter = 0;
		int temp = i;
		while(temp != 0){
			if(temp % 2 == 1){
				counter++;
			}
			temp = temp/2;
		}
		cout<<i<<" "<<counter<<endl;
	}
	return 0;
}