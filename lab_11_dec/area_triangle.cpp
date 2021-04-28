#include <iostream>
using namespace std;

int main(void){
	int side_length, height;
	cout<<"enter side length and height in cm as space separated integers"<<endl;
	cin>>side_length>>height;
	cout<<0.5*side_length*height<<endl;
	return 0;	
}