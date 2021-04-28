#include <iostream>
using namespace std;

int main(void){
	int amount, note_of_100, note_of_50, note_of_1, note_of_2, note_of_5, note_of_10, note_of_20;
	cout<<"enter an amount"<<endl;
	cin>>amount;
	note_of_100=amount/100;
	note_of_50=(amount%100)/50;
	note_of_20=(amount%100)%50/20;
	note_of_10=(((amount%100)%50)%20)/10;
	note_of_5=((((amount%100)%50)%20)%10)/5;
	note_of_2=(((((amount%100)%50)%20)%10)%5)/2;
	note_of_1=(((((amount%100)%50)%20)%10)%5)%2;
	cout<<note_of_100<<" Note(s) of 100"<<endl;
	cout<<note_of_50<<" Note(s) of 50"<<endl;
	cout<<note_of_20<<" Note(s) of 20"<<endl;
	cout<<note_of_10<<" Note(s) of 10"<<endl;
	cout<<note_of_5<<" Note(s) of 5"<<endl;
	cout<<note_of_2<<" Note(s) of 2"<<endl;
	cout<<note_of_1<<" Note(s) of 1"<<endl;

}