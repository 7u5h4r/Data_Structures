#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *start;

void insert(int data,int n){
     node *node1 = new node();
            node1->data = data;
            node1->next = NULL;
            if(n  == 0){
                start = node1;
                return;
            }
            node *ptr = new node();
            ptr = start;
            for(int i=0;i<n-1;i++){
                ptr= ptr->next;
            }
            ptr->next = node1;
}
void print(){
     node *ptr = new node();
     ptr = start;
     while(ptr != NULL){
         cout<<ptr->data<<endl;
         ptr= ptr->next;
     }
}
void in_mid(int da){
    node *ptr = new node();
    node *newnode = new node();
    ptr=start;
    while(ptr->next->data < da){
        ptr=ptr->next;
    }
    newnode->data = da;
    newnode->next = ptr->next;
    ptr->next=newnode;
}
int main(){
    start = NULL;
    insert(1,0);
    insert(2,1);
    insert(5,2);
    insert(10,3);
    insert(11,4);
    print();
    cout<<endl;
    in_mid(5);
    print();
    cout<<1;
    return 0;
}
