#include <iostream>
using namespace std;

int main(void){
	int hr;
	int min;
	char e;
	cin>>hr>>e>>min;
	float angle_of_hr = 30*(float)hr + 0.5*(float)min;
	float angle_of_min = 6 * (float)min;

	float angle_bw = abs(angle_of_hr - angle_of_min);
	cout<<angle_bw<<endl;
	return 0;
}