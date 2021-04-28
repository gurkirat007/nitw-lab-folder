#include <iostream>
using namespace std;

void check(float angle_1, float angle_2, float angle_3);

int main(void){
	float angle_1;
	float angle_2;
	float angle_3;
	cout<<"Enter the three numbers as space separated integers"<<endl;
	cin>>angle_1>>angle_2>>angle_3;
	check(angle_1, angle_2, angle_3);

}

void check(float angle_1, float angle_2, float angle_3){
	if(angle_1+angle_2+angle_3!=180){
		cout<<"The angles given aren't of a triangle"<<endl;
	}
	else{
		if(angle_1==angle_2 && angle_2==angle_3){
			cout<<"Equilateral triangle"<<endl;
		}
		else if((angle_1==angle_2 && angle_2!=angle_3) || (angle_1==angle_3 && angle_3!=angle_2) || (angle_2==angle_3 && angle_3!=angle_1)){
			cout<<"Isoceles triangle"<<endl;
		}
		else{
			cout<<"Scalene triangle"<<endl;
		}

		if(angle_3==90 || angle_2==90 || angle_1==90){
			cout<<"Right angled triangle"<<endl;
		}

	}

}