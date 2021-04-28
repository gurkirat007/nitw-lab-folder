#include <iostream>
using namespace std;

int main(void){
	int a = 125, b = 12345;
	long ax = 1234567890;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	cout<<a+c<<endl;
	cout<<x+c<<endl;
	cout<<dx+x<<endl;
	cout<<((int)dx)+ax<<endl;
	cout<<a+x<<endl;
	cout<<ax+c<<endl;
	return 0;
}