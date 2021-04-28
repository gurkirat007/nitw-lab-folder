#include <iostream>
#include <fstream>
using namespace std;

int main(void){
	string  array[100];
	string data;
	ifstream infile;
	int i = 0;
	infile.open("file1.txt");
	while(getline(infile, data)){
		array[i] = data;
		i++;
	}
	infile.close();
	infile.open("file2.txt");
	while(getline(infile, data)){
		array[i] = data;
		i++;
	}
	infile.close();
	infile.open("file3.txt");
	while(getline(infile, data)){
		array[i] = data;
		i++;
	}
	infile.close();
	string array_to_sort[i];
	for(int j = 0; j<i; j++){
		array_to_sort[j] = array[j];
	}
	for(int j = 0; j < i-1; j++){
		for(int k = 0; k<i-1; k++){
			if((int)array_to_sort[k][0]>(int)array_to_sort[k+1][0]){
				string temp;
				temp = array_to_sort[k];
				array_to_sort[k] = array_to_sort[k+1];
				array_to_sort[k+1] = temp;
			}
		}
	}
	ofstream outfile;
	outfile.open("file4.txt");
	for(int j = 0; j<i; j++){
		outfile<<array_to_sort[j]<<endl;
	}
	outfile.close();
	return 0;
}