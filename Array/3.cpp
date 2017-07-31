#include<iostream>
using namespace std;
int main(){
int a[3][3];
cout<<int(&a)<<endl<<&a[0][0]<<endl<<int(&a[2][1]);
}
