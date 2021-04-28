#include <iostream>
#include <sstream>
#include <vector>#include <string>
using namespace std;

int main(void){
	int n;
	cin>>n;
	vector<string> v1;
	for(int i = n; i>0; i--){
		for(int j=0; j<=n; j++){
			int numerator = j;
			string numerator_str;
			int denomenator = i;
			string denomenator_str;
			stringstream ss;
			ss<<numerator;
			ss>>numerator_str;
			ss<<denomenator;
			ss>>denomenator_str;
			for(int k=2; k<=denomenator; k++){
				while(numerator%k==0 && denomenator%k==0){				
					numerator=numerator/k;
					denomenator=denomenator/k;						
				}


				string fraction = numerator_str + "/" + denomenator_str;
				
				for(int l=0; l<(n+1)*(n+2)/2; l++){
					if(final_array_before_sort[l] == fraction){
						break;
					}
					else{
						final_array_before_sort[l] = fraction;
					}

				}
			}
		}

	}	
	for(int i=0; i<(n+1)*(n+2)/2; i++){
		cout<<final_array_before_sort[i]<<" ";
	}
	cout<<endl;
	return 0;
}