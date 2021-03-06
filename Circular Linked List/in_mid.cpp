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
            node1->next = start;
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
     node * ptr = new node();
     ptr = start;
     while(1){
         cout<<ptr->data<<" \n";
         if(ptr->next==start)
            return;
         ptr= ptr->next;
     }
}
void in_mid(int da,int c){
    node *ptr = new node();
    node *newnode = new node();
    ptr=start;
    if(c==0){
        newnode->data = da;
        newnode->next = start;
        start=newnode;
        return;
    }
    c--;
    while(c){
        ptr=ptr->next;
        c--;
    }
    newnode->data = da;
    newnode->next = ptr->next;
    ptr->next = newnode;
}
int main(){
    start = NULL;
    insert(3,0);
    insert(10,1);
    insert(18,2);
    insert(0,3);
    insert(2,4);
    print();
    cout<<endl;
    in_mid(100,4);
    print();
    return 0;
}
