#include <iostream>
#include <string>
using namespace std;

string reverse(string word, int n, int i);


int main(void){
	string word;
	cin>>word;
	int i = 0;
	n = word.length();
	reverse(word, n, i);
}



string reverse(string word, int n, int i){
	char temp = word[n/2-i];
	word[n/2-i] = word[n/2+1+i];
	word[n/2+1+i] = temp;
	if(i == n/2){
		return word;
	}
	return reverse(word, n, i+1);
}