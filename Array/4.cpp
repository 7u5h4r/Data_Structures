#include<iostream>
using namespace std;
int main(){
    int n=5,i,j,f;
    int a[n]={2,3,25,5,30};
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            f=0;
            if(a[j]>a[i]){
                cout<<a[i]<<","<<a[j]<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<a[i]<<","<<-1<<endl;
    }
}
