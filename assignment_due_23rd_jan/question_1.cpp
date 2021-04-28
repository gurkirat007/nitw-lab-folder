#include <iostream>
using namespace std;

int main() {
	int rows=5;
	for(int i=0; i<rows; i++){
	    for(int j=0; j<=rows; j++){
	        if(i+j<=4){
	            cout<<" *";
	        }
	       else{
	            cout<<"  ";
	       }
	    }
	    for(int j=0; j<=rows; j++){
	    	if(j-i>0){
	    		cout<<"* ";
	    	}
	    	else{
	    		cout<<"  ";
	    	}
	    }
	    cout<<endl;
	}
	for(int j=0; j<rows; j++){
		for(int i=0; i<=rows; i++){
			if(j-i>=0){
				cout<<" *";
			}
			else{
				cout<<"  ";
			}
		}
		for(int i=0; i<=rows; i++){
	        if(i+j>4){
	            cout<<"* ";
	        }
	       else{
	            cout<<"  ";
	       }
	    }
		cout<<endl;
	}
	return 0;
}
