#include<iostream>
using namespace std;
int main(){
    int n=3,i,j;
    int a[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    a[2][1]='\0';
    cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
