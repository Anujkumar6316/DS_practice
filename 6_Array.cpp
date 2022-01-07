#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class arr{
    public:
    int *a;
    int size;
    int length;
    arr(){
        cout<<"Enter the size of an array: ";
        cin>>size;
        a = new int[size];
        cout<<"Enter the no of element: ";
        cin>>length;
        cout<<"Enter the element: \n";
        for(int i=0;i<length;i++){
            cin>>a[i];
        }
    }
    arr(int s,int l){
        size=s;
        length=l;
        a=new int[s];
        for(int i=0;i<l;i++){
            a[i]=i+1;
        }
    }
    void display(){
        for(int i=0;i<length;i++)
            cout<<a[i]<<" ";
    }
    void append_x(int x){
        a[length]=x;
        length++;
    }
    void insert(int x,int index){
        for (int i = length; i <=index; i--)
        {
            a[i+1]=a[i];
        }
        // a[index]=x;
        length++;
    }
    void delete_x(int index){
        for (int i = index; i < length-1; i++)
        {
            a[i]=a[i+1];
        }
        length--;
    }
    void binary_search(int key){
        int n=sizeof(a)/sizeof(a[0]);
        sort(a,a+n);
    }
};

int main()
{
    int temp=5;
    int *a_ptr=new int[temp];
    for(int i=0;i<temp;i++)
        a_ptr[i]=i+1;
    cout<<"1.Dyanamic array: ";
    for(int i=0;i<temp;i++)
        cout<<a_ptr[i]<<" ";
        cout<<endl;

    // increasing the size of an array..
    int *q=new int[10];
    for(int i=0;i<temp;i++)
        q[i]=a_ptr[i];
    delete []a_ptr;
    a_ptr=q;
    q=NULL;
    cout<<"2.Increased array size: ";
    for(int i=0;i<10;i++)
        cout<<a_ptr[i]<<" ";
        cout<<endl;

    // 2d array representation..
    int arr2d[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<"3.2D array representation: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            cout<<arr2d[i][j]<<" ";
        cout<<endl;
    }

    int *p2d[3];
    p2d[0] = new int[4];
    p2d[1] = new int[4];
    p2d[2] = new int[4];

    int count=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            p2d[i][j]=count++;
        }
    }
    cout<<"4.single pointer array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<p2d[i][j]<<" ";
        }
        cout<<endl;
    }
    int **p3d=new int*[3];
    p3d[0]=new int[4];
    p3d[1]=new int[4];
    p3d[2]=new int[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            p3d[i][j]=count++;
        }
    }

    cout<<"5.Double pointer array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<p2d[i][j]<<" ";
        }
        cout<<endl;
    }

    //creating an array using class..
    arr a1={10,5};
    cout<<"6.Array elements: "<<endl;
    a1.display();
    cout<<"\n7.Adding element at the end(eg-10): ";
    a1.append_x(10);
    a1.display();
    cout<<"\n8.Inserting element: ";
    a1.insert(12,2);
    a1.display();
    cout<<"\n9.Deleting index(2): ";
    a1.delete_x(2);
    a1.display();
    cout<<"\n10.Binary search(5): ";
    a1.binary_search(5);

}