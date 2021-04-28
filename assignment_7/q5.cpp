#include<iostream>
using namespace std;
void display(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}
void square(int a[][100],int n,int m,int num){
    for(int i=m;i<n;i++){
        for(int j=m;j<n;j++)
            a[i][j]=num;
    }
}
void diamond(int a[][100],int n,int m,int num){
    int b[100][100];
    square(b,n,0,1);
    int r=n/2,i,j,k,l;
    for(i=0;i<=r;i++)
    {
        for(j=0;j<r-i;j++);
        for(k=-1;k<=2*i-1;k++,j++){
            b[i][j]=num; 
            b[n-i-1][j]=num;
        }
    }
    cout<<endl;
    for(i=m,l=0;i<n-m;i++,l++){
        for(j=m,k=1;j<n-m;j++,k++){
            if(l==n/2)
                l+=2;
            a[i][j]=b[l][k];
        }
    }
}
void triangle(int a[][100],int n,int m,int num){
    int r=n/2,i,j,k,l;
    for(l=0,i=m;l<=r;i++,l++)
    {
        for(j=m;j<r-l;j++);
        for(k=-1;k<=2*l-1;k++,j++)
            a[i][j]=num; 
    }
}
int main(){
    int a[100][100],i,n,m,num;
    cout<<"Enter which shape you wish to generate :\n1)Square\n2)Diamond\n3)Triangle\nEnter your choice : ";
    cin>>i;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number to be filled : ";
    cin>>num;
    cout<<"Enter at how much is should be offset from the center : ";
    cin>>m;
    square(a,n,0,1);
    switch(i){
        case 1:
           square(a,n-m,m,num);
           break;
        case 2:
            diamond(a,n,m,num);
            break;
        case 3:
            triangle(a,n,m-2,num);
            break;
        default:
            cout<<"Invalid Entry";
            break;
    }
    display(a,n);
    return 0;
}