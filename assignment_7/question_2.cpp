#include <iostream>
using namespace std;

struct student{
	int roll_no;
	char section;
	float marks_in_PSCP;
};

struct avg_marks{
	char section;
	float avrg_marks;
};

int main(void){
	int num_students_each_sec = 3;
	int num_sec = 7;
	int total_students = num_students_each_sec*num_sec;
	student array[num_students_each_sec*num_sec]{};
	char array_sections[num_sec] = {'G', 'H', 'K', 'L', 'M', 'N', 'Q'};
	avg_marks section_array[num_sec];
	float global_avg;
	float total_sum = 0;
	for(int i = 0; i<num_students_each_sec*num_sec; i++){
		cin>>array[i].roll_no>>array[i].section>>array[i].marks_in_PSCP;
		total_sum += array[i].marks_in_PSCP;
	}
	global_avg = total_sum/total_students;
	

	for(int i = 0; i<num_sec; i++){
		section_array[i].section = array_sections[i];

	}

	for(int i = 0; i<num_sec; i++){
		float sum = 0; 
		for(int j = 0; j<num_students_each_sec*num_sec; j++){
			if(array[j].section == section_array[i].section){
				
				sum += array[j].marks_in_PSCP;
			}
		}
		section_array[i].avrg_marks = sum/num_students_each_sec;
	}
	cout<<"Average marks of each section are"<<endl;

	for(int i = 0; i<num_sec; i++){
		cout<<section_array[i].section<<": "<<section_array[i].avrg_marks<<endl;
	}
	cout<<"Global average: "<<global_avg<<endl;
	

	
	return 0;
}