#include <iostream>
using namespace std;

struct RGB{
	float red;
	float green;
	float blue;
};

struct CMYK{
	float cyan;
	float magenta;
	float yellow;
	float black;
};


int main(void){
	RGB colour;
	cout<<"Enter RGB as space separated numbers";
	cin>>colour.red>>colour.green>>colour.blue;
	CMYK convert;
	float white = max(colour.red/255, colour.green/255);
	white = max(white, colour.blue/255);
	if(white != 0){
		convert.cyan = (white-colour.red/255)/white;
		convert.magenta = (white-colour.green/255)/white;
		convert.yellow = (white-colour.blue/255)/white;
		convert.black = 1 - white;
	}
	else{
		convert.cyan = 0;
		convert.magenta = 0;
		convert.yellow = 0;
		convert.black = 1;
	}
	cout<<colour.red<<" "<<colour.green<<" "<<colour.blue<<endl;
	cout<<convert.magenta<<" "<<convert.yellow<<" "<<convert.cyan<<" "<<convert.black<<endl;


}