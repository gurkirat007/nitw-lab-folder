#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;


int main(void){
	int n;
	stringstream ss;
	cin>>n;
	vector<string> g1;
	vector<float> g2;
	for(int i = 1; i<=n; i++){
		for(int j = 0; j<=i; j++){
			int numerator = j;
			int denomenator = i;
			//converting fraction to lowest form
			for(int k=2; k<=denomenator; k++){
				while(numerator%k==0 && denomenator%k==0){				
					numerator=numerator/k;
					denomenator=denomenator/k;						
				}
			}
			//converting int numerator to string
			ss<<numerator;
			string numerator_str;
			ss>>numerator_str;
			//clearing string stream to add new number
			ss.clear();
			//converting int denomenator to string
			ss<<denomenator;
			string denomenator_str;
			ss>>denomenator_str;
			//clearing string stream to add new number
			ss.clear();
			float fraction = (float)numerator/(float)denomenator;
			string fraction_str = numerator_str + "/" + denomenator_str;
			//checking if element is already present in the vector
			if(find(g1.begin(), g1.end(), fraction_str) != g1.end()){
				continue;
			}
			else{
				g1.push_back(fraction_str);
				g2.push_back(fraction);
			}
		}
	}
	//sorting vectors
	for(int i=0; i<g2.size(); i++){
		for(int j= i+1; j<g2.size(); j++) {
			if(g2[j]<g2[i]){
				float temp_1=g2[i];
				g2[i]=g2[j];
				g2[j]=temp_1;
				string temp= g1[i];
				g1[i]=g1[j];
				g1[j]=temp;
			}
		}
	}
	//printing vectors
	for(int i = 0; i<g1.size(); i++){
		cout<<g1[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

