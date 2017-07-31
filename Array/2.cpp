#include<iostream>
using namespace std;
int main(){
    int n=10,i,j,c=0;
    int a[n]={12,4,10,6,26,-10,2,29,3};
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(a[i]+a[j]==16){
                c++;
                cout<<"Pair Number: "<<c<<" '"<<a[i]<<","<<a[j]<<"' "<<endl;
            }
        }
    }
    cout<<c;
}
