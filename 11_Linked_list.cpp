#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first=0;

void LL_creation(int arr[], int size){
    node *a,*last;
    first=new node();
    first->data=arr[0];
    first->next=0;
    last=first;

    for(int i=1;i<size;i++){
        a=new node();
        a->data=arr[i];
        a->next=0;
        last->next=a;
        last=a;
    }
}

void display_LL(node *a){
    while(a!=0){
        cout<<a->data<<" ";
        a=a->next;
    }
    cout<<endl;
}

int counting_nodes(node *a){
    int ans=0;
    while(a!=0){
        ans+=1;
        a=a->next;
    }
    return ans;
}

int node_ele_sum(node *a){
    int sum=0;
    while(a!=0){
        sum+=a->data;
        a=a->next;
    }
    return sum;
}

int max_node_ele(node *a){
    int max=a->data;
    while(a!=0){
        if(max<a->data)
            max=a->data;
        a=a->next;
    }
    return max;
}

int search_in_node(node *a,int ele){
    while(a!=0){
        if(a->data==ele)
            return 1;
        a=a->next;
    }
    return 0;
}

node * improved_search(node *p,int key){
    node *q;
    while(p!=0){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return 0;
}

void instertion(node *a,int ele){
    while (a->next!=0)
    {
        a=a->next;
    }
    node*p=new node();
    p->data=ele;
    p->next=0;
    a->next=p;   
}

void pos_insert(node *p,int pos, int ele){
    if(pos<0 || pos > counting_nodes(p))
        return;
    node *x=new node();
    x->data=ele;
    if(pos==0){
        x->next=first;
        first=x;
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        x->next=p->next;
        p->next=x;
    }
}

void del_node(node *p,int key){
    node *q=0;
    while(p!=0){
        if(p->data==key){
            if(q==0){
                first=p->next;
            }
            else
                q->next=p->next;
        }
        q=p;
        p=p->next;
    }
}

int check_sort(node *p){
    node *q=first;
    p=p->next;
    while(p!=0){
        if(q->data<=p->data)
            return -1;
        p=p->next;
    }
    return 1;
}

void dup_node(node *p){
    node *q=first;
    p=p->next;
    while (q!=0)
    {
        while(p!=0){
            if(p->data==q->data){
                q->next=p->next;
            }
            p=p->next;
        }
        q=q->next;
    }
    
}

int main()
{
    int arr[]={2,4,5,15,10,34,54,32,22,44,33,22,12};
    // node *head=0;
    // node *second=0;
    // node *third=0;
    // head=new node();
    // second=new node();
    // third=new node();
    // head->data=1;
    // head->next=second;
    // second->data=2;
    // second->next=third;
    // third->data=3;
    // third->next=0;

    int size=sizeof(arr)/sizeof(arr[0]);
    LL_creation(arr,size);
    display_LL(first);
    cout<<counting_nodes(first)<<endl;
    cout<<node_ele_sum(first)<<endl;
    cout<<max_node_ele(first)<<endl;
    cout<<search_in_node(first,54)<<endl;
    cout<<search_in_node(first,1)<<endl;
    cout<<improved_search(first,34)<<endl;
    display_LL(first);
    instertion(first,111);
    display_LL(first);
    pos_insert(first,0,112);
    pos_insert(first,3,113);
    del_node(first,112);
    display_LL(first);
    cout<<"duplicate"<<endl;
    dup_node(first);
    display_LL(first);

    
}
