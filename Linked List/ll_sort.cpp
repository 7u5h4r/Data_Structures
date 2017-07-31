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
void sort(){
    node * i = new node();
    node * j = new node();
    i = start;
    j = start;
    node * a = new node();
    int min,temp;
    while(i->next){
        min=i->data;
        j = start;
        while(j->next){
            if(j->data < min){
                min=j->data;
                a=j;
            }
            j=j->next;
        }
        temp=i->data;
        i->data=a->data;
        a->data=temp;
        i= i->next;
    }
}
void print(){
     node * ptr = new node();
     ptr = start;
     while(ptr != NULL){
         cout<<ptr->data<<" \n";
         ptr= ptr->next;
     }
}
int main(){
    start = NULL;
    insert(3,0);
    insert(10,1);
    insert(18,2);
    insert(1,3);
    insert(2,4);
    sort();
    print();
    return 0;
}
