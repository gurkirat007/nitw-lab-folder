#include<iostream>
using namespace std;
void shift(int a[][100],int n,int r){
    int k,i,j,m,b[100];
    for(i=0;i<n/2;i++){
        m=0;
        for(j=i;j<n-i-1;j++,m++)
            b[m]=a[i][j];
        for(j=i;j<n-i-1;j++,m++)
            b[m]=a[j][n-i-1];
        for(j=n-i-1;j>i;j--,m++)
            b[m]=a[n-i-1][j];
        for(j=n-i-1;j>i;j--,m++)
            b[m]=a[j][i];

        for(j=0;j<r;j++){
            if(i%2==1){
                int temp = b[0];
                for(k=0;k<m-1;k++)
                    b[k]=b[k+1];
                b[m-1]=temp;
            }
            else{
                int temp = b[m-1];
                for(k=m-1;k>0;k--)
                    b[k]=b[k-1];
                b[0]=temp;
            }
        }
        
        m=0;
        for(j=i;j<n-i-1;j++,m++)
            a[i][j]=b[m];
        for(j=i;j<n-i-1;j++,m++)
            a[j][n-i-1]=b[m];
        for(j=n-i-1;j>i;j--,m++)
            a[n-i-1][j]=b[m];
        for(j=n-i-1;j>i;j--,m++)
            a[j][i]=b[m];

    }
}
int main(){
    int n,i,j,a[100][100],k;
    cout<<"Enter number of rows and rotation factor : ";
    cin>>n>>k;
    cout<<"Enter elements : ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    shift(a,n,k);

        for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<'\t';
        cout<<'\n';
    }
    return 0;

}