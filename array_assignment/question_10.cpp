#include <iostream>
using namespace std;

int main(void){
	int length;
	int z;
	cin>>length;
	cin>>z;
	int array[length];
	for(int i = 0; i < length; i++){
		cin>>array[i];
	}
	int check_mod_use[length];
	for(int i=0; i<length; i++){
		if(z-array[i]>=0){
			array[i]=z-array[i];
			check_mod_use[i]=0;
		}
		else{
			array[i]=array[i]-z;
			check_mod_use[i]=1;
		}
	}
	for(int i=0; i<length; i++){
		for(int j= i+1; j<length; j++) {
			if(array[j]<array[i]){
				int temp= array[i];
				int temp_for_check_mod=check_mod_use[i];
				array[i]=array[j];
				check_mod_use[i]=check_mod_use[j];
				array[j]=temp;
				check_mod_use[j]=temp_for_check_mod;
			}
		}

		
	}

	for(int i=0; i<length; i++){
		if(check_mod_use[i] == 0){
			array[i]=z-array[i];
		}
		else if(check_mod_use[i]==1){
			array[i]=z+array[i];
		}
	}
	for(int i=0; i<length; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;

}