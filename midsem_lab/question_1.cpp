#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[50],end,words_arr[50][50];
    int n=1;
    
    cin>>word;
    end = word[strlen(word)-1];
    strcpy(words_arr[0],word);
    while(strcmp(word,"#")!= 0){
        
        cin>>word;
        if(word[0] == end){
            strcpy(words_arr[n],word);
            n++;
            end = word[strlen(word)-1];
        }
        else{
            break;
        }
    }
    for(int i=0; i<n; i++)
        cout<<words_arr[i]<<endl;
    return 0;
}