#include <iostream>
using namespace std;

void shiftinator(int a[],int n,int k);


int main(){
 	int a[100],n,k;
 	cout<<"Enter the Size of the Array - ";
 	cin>>n;
 	cout<<"Enter the value to be shifted to right by - ";
 	cin>>k;
 	for(int i=0;i<n;i++){
 		cout<<"Enter Value of Array at position "<<i+1<<" - ";
 		cin>>a[i];
 	}
 	shiftinator(a,n,k);
 	for(int i=0;i<n;i++){
 		cout<<"Val of shifted array is - "<<a[i]<<endl;
 	}
}



void shiftinator(int a[],int n,int k){
 	for(int i=0;i<k;i++){
 		int t = a[n-1];
 		for (int j=n-1;j>=1;j--){
 			a[j] = a[j-1];
 		}
 		a[0] = t ;
 	}
 }