#include <iostream>
#include <cmath>
using namespace std;

struct point{
	float x;
	float y;
};

int main(void){
	point p1;
	point *pointer_p1;
	pointer_p1 = &p1;
	point p2;
	point *pointer_p2;
	pointer_p2 = &p2;
	cout<<"Enter coordinates of point 1 as space separated numbers"<<endl;
	cin>>(pointer_p1 -> x)>>(pointer_p1 -> y);
	cout<<"Enter coordinates of point 2 as space separated numbers"<<endl;	
	cin>>(pointer_p2 -> x)>>(pointer_p2 -> y);
	float distance = pow(pow((pointer_p2 -> x)-(pointer_p1 -> x), 2) + pow((pointer_p2 -> y)-(pointer_p1 -> y), 2), 0.5);
	cout<<distance<<endl;
	return 0;
}