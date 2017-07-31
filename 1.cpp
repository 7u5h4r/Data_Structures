#include<iostream>
using namespace std;
int main(){
    int n=10,i,j,k,c=1;
    int a[n]={1,2,2,3,3,3,3,3,3,7};
    for(i=0;i<9;i++){
        if(a[i]==a[i+1])
            c++;
        else
            c=1;
        if(c>n/2){
            cout<<a[i]<<endl;
            return 0;
        }
    }
}
