#include <iostream>
#include <cmath>
using namespace std;

float area(float a, float b, float c);

int main(void){
	float a=0, b=0, c=0;
	cin>>a>>b>>c;
	
	if(area(a, b, c) == -1){
		cout<<"Triangle not possible"<<endl;
	}
	else{
		cout<<area(a, b, c)<<endl;
	}
	return 0;
}

float area(float a, float b, float c){
	float s =(a+b+c)/2;
	if(s-a<=0 || s-b<=0 || s-c<=0){
		return -1;
	}
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}