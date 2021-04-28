#include <iostream>
#include <cmath>
using namespace std;


float distance(int l1, int l2, int g1, int g2);
	
int main(void){
	int l1, l2, g1, g2;
	cout<<"Latitude 1 and Latitude 2"<<endl;
	cin>>l1>>l2;
	cout<<"Longitude 1 and Longitude 2"<<endl;
	cin>>g1>>g2;
	cout<<"distance="<<distance(l1, l2, g1, g2)<<" Nautical Miles"<<endl;

}

float distance(int l1, int l2, int g1, int g2){
	float dist=3963*acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
 	return dist;
}