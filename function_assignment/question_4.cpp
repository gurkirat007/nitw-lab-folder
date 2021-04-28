#include <iostream>
using namespace std;

void pie_calcu(int n);

int main(void){
	int n;
	cin>>n;
	pie_calcu(n);

}


void pie_calcu(int n){
	double sum=0;
	for(int i=0; i<=n; i++){
		int multiplier;
		if(i%2==0){
			multiplier=1;
		}
		else{
			multiplier=-1;
		}
		double denominator=2*double(i)+1;
		double term=double(multiplier)*double(1)/denominator;
		
		sum+=term;

	}
	printf("%.3f", 4*sum);

}