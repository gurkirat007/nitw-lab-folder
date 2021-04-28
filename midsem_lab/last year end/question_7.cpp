#include <iostream>
#include <fstream>
using namespace std;

void data_transfer(string filename_1, string filename_2);

int main(void){
//file 1 to temp
	data_transfer("file1.txt", "temp1.txt");
//file 3 to file 1
	data_transfer("file3.txt", "file1.txt");
//file 2 to file 3
	data_transfer("file2.txt", "file3.txt");
//temp to file 2
	data_transfer("temp1.txt", "file2.txt");
	return 0;
}


void data_transfer(string filename_1, string filename_2){
	ifstream infile;
	ofstream outfile;
	string data;
	infile.open(filename_1);
	outfile.open(filename_2);
	while(getline(infile, data)){
		outfile<<data<<endl;
	}
	infile.close();
	outfile.close();
}