#include<iostream>
using namespace std;


struct student{
    int rollno;
    char name[20];
    float marks;
};


int main(void){
    int num_row;
    int col;
    cout<<"Enter number of rows : ";
    cin>>num_row;
    student **ptr = new student* [num_row];
    int *s = new int [num_row];
    for(int i=0; i<num_row; i++){
        cout<<"Enter number of columns in the row "<<i+1<<" : ";
        cin>>col;
        s[i]=col;
        ptr[i]= new student [col];
        for(int j=0;j<col;j++){
            cout<<"Enter rollno name and class \n";
            cin>>ptr[i][j].rollno>>ptr[i][j].name>>ptr[i][j].marks;
        }
    }
     for(int i=0;i<num_row;i++){
        for(int j=0;j<s[i]-1;j++){
            for(int k=0;k<s[i]-j-1;k++){
                if(ptr[i][k].marks > ptr[i][k+1].marks){
                    swap(ptr[i][k],ptr[i][k+1]);
                }
            }
        }
    }
    cout<<endl;
        for(int i=0;i<num_row;i++){
            for(int j=0;j<s[i];j++){
                cout<<ptr[i][j].rollno<<' '<<ptr[i][j].name<<' '<<ptr[i][j].marks<<' '<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
    int max = s[0];
    for(int i=0; i<num_row; i++){
        if(max < s[i]){
            max = s[i];
        }
    }

    cout<<endl;
    for(int i=0;i<=max;i++){
        for(int j=0;j<num_row;j++){
                if(s[j]<=i)
                    cout<<"\t";
                else{
                    cout<<ptr[j][i].rollno<<' '<<ptr[j][i].name<<' '<<ptr[j][i].marks<<' '<<'\t';
                }

        }
        cout<<endl;
    } 

    for(int i=0;i<num_row;i++){
        delete []ptr[i];
    }
    delete []ptr;
    delete []s;
}