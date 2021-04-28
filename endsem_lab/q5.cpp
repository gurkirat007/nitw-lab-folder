#include <iostream>
using namespace std;

struct element{
	int ssize;
	string word;
};

int binary_search(element array[], int start, int end, int search);


int main(void){
	int length;
	int search;
	cin>>length>>search;
	element array[length];
	for(int i = 0; i<length; i++){
		cin>>array[i].word;
		array[i].ssize = array[i].word.size();
	}
	int ans = binary_search(array, 0, length-1, search);
	if(ans == -1){
		cout<<"NOT FOUND"<<endl;
	}
	else{
		cout<<ans<<endl;
		cout<<array[ans].word;
	}
	


}

int binary_search(element array[], int start, int end, int search){
	int mid = (start + end)/2;
	if(array[mid].ssize == search){
		return mid;
	}
	else if(array[mid].ssize>search){
		return binary_search(array, start, mid, search);
	}
	else if(array[mid].ssize<search){
		return binary_search(array, mid, end, search);
	}

	return -1;
}


