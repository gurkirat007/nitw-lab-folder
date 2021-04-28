//incomplete
#include <iostream>
using namespace std;



int main(void){
	int n;
	int rotation_factor;
	cin>>rotation_factor>>n;
	if(n%2 != 1){
		cout<<"invalid"<<endl;
		return 1;
	}
	int matrix[n][n];
	int transformed_matrix[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin>>matrix[i][j];
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i % 2 == 0){
				transformed_matrix[i][j] = matrix[i-rotation_factor][j]
			}
			else {

			}
		}
	}
	

}