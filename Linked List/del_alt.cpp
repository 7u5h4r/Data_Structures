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
void del_alt(){
    node *ptr = new node();
    node *newnode = new node();
    ptr=start;
    int co=0;
    while(ptr->next!=NULL){
        if(ptr->next->next == NULL){
            ptr->next=NULL;
            return;
        }
        ptr->next=ptr->next->next;
        ptr=ptr->next;
    }
}
int main(){
    start = NULL;
    insert(1,0);
    insert(2,1);
    insert(5,2);
    insert(10,3);
    insert(11,4);
    insert(12,5);
    print();
    cout<<endl;
    del_alt();
    print();
    cout<<1;
    return 0;
}
