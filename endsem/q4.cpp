#include <iostream>
using namespace std;


int main(void){
	int n;
	cin>>n;
	int first = 30;
	int second = 35;
	int i = 0;
	int i1=0;
	int i2=0;
	while(i<n){
		if(i%2==0){
			cout<<first<<" ";
			i1++;
			first += 8*i1;
		}
		else if(i%2==1){
			cout<<second<<" ";
			i2++;
			second += 6*i2;
		}
		i++;
	}
	cout<<endl;

}