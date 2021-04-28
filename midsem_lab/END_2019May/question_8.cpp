#include <iostream>
using namespace std;

class Imaginary_num{
	private:
		double real_part;
		double imaginary_part;
	public:
		Imaginary_num(){
			real_part = 0;
			imaginary_part = 0;
		}
		Imaginary_num(double x, double y){
			real_part = x;
			imaginary_part = y;
		}
		Imaginary_num add(Imaginary_num num);
		Imaginary_num subtract(Imaginary_num num);
		void show();
};

Imaginary_num Imaginary_num::add(Imaginary_num num){
	Imaginary_num num3;
	num3.real_part = real_part + num.real_part;
	num3.imaginary_part = imaginary_part +num.imaginary_part;
	return num3;

}
Imaginary_num Imaginary_num::subtract(Imaginary_num num){
	Imaginary_num num3;
	num3.real_part = real_part - num.real_part;
	num3.imaginary_part = imaginary_part - num.imaginary_part;
	return num3;
}
void Imaginary_num::show(){
	cout<<"("<<real_part<<","<<imaginary_part<<")"<<endl;
}


int main(void){
	double real, imaginary;
	cout<<"Enter C1"<<endl;
	cin>>real>>imaginary;
	Imaginary_num num1(real, imaginary);
	cout<<"Enter C2"<<endl;
	cin>>real>>imaginary;
	Imaginary_num num2(real, imaginary);
	Imaginary_num num3 = num1.add(num2);
	num3.show();
	num3 = num1.subtract(num2);
	num3.show();
}