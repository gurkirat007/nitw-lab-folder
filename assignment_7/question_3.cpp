#include <iostream>
using namespace std;

struct student{
	int number;
	string name;
	float marks;
	string branch;
};

int main(void){
	int num_students = 7;
	student array[num_students];
	student* ptr_array = array;
	for(int i = 0; i<num_students; i++){
		cin>>(ptr_array+i) -> number>>(ptr_array+i) -> name>>(ptr_array+i) -> marks>>(ptr_array+i) -> branch;
	}
	for(int i = 0; i<num_students; i++){
		if((ptr_array+i) -> name == "Aditya" && (ptr_array+i) -> branch == "CSE" && (ptr_array+i) -> marks>60){
			cout<<(ptr_array+i)->number<<" | ";
			cout<<(ptr_array+i)->name<<" | ";
			cout<<(ptr_array+i)->marks<<" | ";
			cout<<(ptr_array+i)->branch<<endl;
		}
	}
	return 0;
}