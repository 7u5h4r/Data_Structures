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
            if(n==8){
                ptr=start;
                node1->next=ptr->next->next->next->next->next;
            }
            node1->next=NULL;
}
void detect_loop(){
    node * ptr=new node();
    node * pt=new node();
    ptr=start;
    pt=start;
    while(pt->next && pt->next->next){
        if(ptr->next == pt->next->next){
            cout<<"Yes there is loop"<<endl;
            ptr->next->next=NULL;
            return;
        }
        ptr=ptr->next;
        pt=pt->next->next;
    }
    cout<<"There is no loop"<<endl;
}
void print(){
     node * ptr = new node();
     ptr = start;
     while(ptr){
         cout<<ptr->data<<endl;
         ptr= ptr->next;
     }
}
int main(){
    start = NULL;
    insert(3,0);
    insert(10,1);
    insert(18,2);
    insert(0,3);
    insert(2,4);
    insert(11,5);
    insert(22,6);
    insert(56,7);
    insert(1,8);
    detect_loop();
    print();
    return 0;
}
