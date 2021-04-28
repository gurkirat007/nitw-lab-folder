#include <iostream>
using namespace std;


struct name_size{
    string name;
    int ssize;
};

int main(void){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    name_size array[n];
    cout<<"Enter the names"<<endl;
    for(int i = 0; i<n; i++){
        cin>>array[i].name;
        string Name = array[i].name;
        array[i].ssize = Name.size();
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(array[j].ssize > array[j+1].ssize){
                name_size temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<array[i].name<<endl;
    }
}