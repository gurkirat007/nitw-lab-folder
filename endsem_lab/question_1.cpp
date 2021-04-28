#include <iostream>
using namespace std;

struct pos_number{
	int position;
	int freq;
};

int main(void){
	//taking inputs
	string s;
	int k;
	cin>>s;
	int n = s.size();
	cin>>k;
	int counter_vowel = 0;
	//check if vowels are present
	for(int i = 0; i<n; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			counter_vowel++;
		}
	}
	if(counter_vowel == 0){
		cout<<"Not found!"<<endl;
		return 0;
	}
	//array of position as well as frequency of vowels in the sub array
	pos_number arr[n-k+1];
	//filling values in arr
	for(int i = 0; i<=n-k; i++){
		int counter = 0;
		for(int j = i; j<i+k; j++){
			if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
				counter++;
			}
		}
		arr[i].position = i;
		arr[i].freq = counter; 
	}
	//finding max frequency
	pos_number maxi = arr[0];
	for(int i = 0; i<n-k+1; i++){
		maxi.freq = max(maxi.freq, arr[i].freq);
	}
	//wherever the max frequency comes start printing
	for(int i = 0; i<n-k+1; i++){
		if(arr[i].freq == maxi.freq){
			for(int j = arr[i].position; j<arr[i].position + k; j++){
				cout<<s[j];
			}
			break;
		}
	}
	cout<<endl;
	
	return 0;	
}