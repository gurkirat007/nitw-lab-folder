#include <iostream>
using namespace std;

int main(void){
	int rows=5;
	int columns=9;
	for(int i=0, k=1; i<rows; i++){
		for(int j=0; j<columns; j++){
			int mid=(columns-1)/2;
			int difference;
			if(i+j<=3){
				cout<<"  ";
			}
			else if(j-i>=5){
				cout<<"  ";
			}
			else if(j==mid){
				cout<<k<<" ";
				
			}
			else if(j<mid){
				difference=mid-j;
				cout<<k-difference<<" ";
			}
			else if(j>mid){
				difference=j-mid;
				cout<<k-difference<<" ";
			}
		}
		cout<<endl;
		k=k+2;
	}
	return 0;
}