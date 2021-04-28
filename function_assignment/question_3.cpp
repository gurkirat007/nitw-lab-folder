#include <iostream>
using namespace std;
  
int binary_search(int start, int end, int array[], int num_to_find);

void sort_array(int array[], int length, int element_to_find);
  
int main(void){
  int length;
  cout<<"Enter length of array"<<endl;
  cin>>length;
  int array[length];
  for(int i=0; i<length; i++){
    cin>>array[i];
  }
  int element_to_find;
  cout<<"which number you wanna find??"<<endl;
  cin>>element_to_find;
  sort_array(array, length, element_to_find);
  
}
  
int binary_search(int start, int end, int array[], int num_to_find){
  while(start<=end){
    int mid= (start+end)/2;
  
    if(num_to_find==array[mid]){
      return mid;
    }
    else if(num_to_find<array[mid]){
      end=mid-1;
    }
    else if(num_to_find>array[mid]){
      start=mid+1;
    }
  }
  return -1;
}




void sort_array(int array[], int length, int element_to_find){
  for(int i=0; i<length; i++){
    for(int j=0; j<length; j++){
      int temp;
      if(i>j && array[i]<array[j]){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      } 
    }
  }
  if(binary_search(0, length-1, array, element_to_find) == -1){
    cout<<"Element to find"<<endl;
  }
  else{
    cout<<binary_search(0, length-1, array, element_to_find)<<endl;
  }

  
}
  
