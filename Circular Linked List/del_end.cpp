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
void del(){
    node *ptr = new node();
    ptr=start;
    while(ptr->next->next!=start){
        ptr=ptr->next;
    }
    ptr->next=start;
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
    del();
    print();
    return 0;
}
