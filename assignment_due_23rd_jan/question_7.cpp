#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	int rows=5;
	int columns=2*rows-1;
	int k=1;
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			int mid=(columns-1)/2;
			
			if(i+j<4 || j-i>=rows){
				cout<<setw(5)<<" ";
			}
			else if(j==mid){
				cout<<setw(5)<<k*k;
			}
			else if(j<mid){
				int difference=mid-j;
				cout<<setw(5)<<(k-difference)*(k-difference);
			}
			else if(j>mid){
				int difference=j-mid;
				cout<<setw(5)<<(k+difference)*(k+difference);
			}
		}
		cout<<endl;
		k=k+2*(i+1);
	}	
	return 0;
}
//here the answer coming isn't much symmetric 
//because of numbers with larger digits