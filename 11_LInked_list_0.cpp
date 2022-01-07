#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first=0,*last=0;

void create_last_node(node *p,int ele){
    node *t=new node();
    t->data=ele;
    t->next=0;
    if(p==0){
        first=t;
        last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}

void display_LL(node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void sort_insert(node *a,int ele){
    node *q=0;
    node *t=new node();
    t->data=ele;
    t->next=0;
    while(a!=0){
        if(a->data<ele){
            q=a;
            a=a->next;
        }
        else{
            q->next=t;
            t->next=a;
            break;
        }
    }

}

int main()
{
    create_last_node(first,5);
    create_last_node(first,10);
    create_last_node(first,15);
    create_last_node(first,20);
    create_last_node(first,25);
    display_LL(first);
    sort_insert(first,11);
    sort_insert(first,21);
    sort_insert(first,30);
    display_LL(first);

}