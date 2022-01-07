#include <iostream>
using namespace std;

// head tail recursion..
void fun1(int n){
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
        cout<<n<<" ";
    }
}

// static and global variable..
int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}

// tree recursion..
void fun3(int n){
    if(n>0){
        cout<<n<<" ";
        fun3(n-1);
        fun3(n-1);
    }
}

//sum of n natural number..
int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    }
    else{
        return 0;
    }
}

//fatorial..
int factorial(int n){
    if(n>0){
        return factorial(n-1)*n;
    }
    else{
        return 1;
    }
}

//power of num...
int power(int a,int b){
    if(b>0){
        return power(a,b-1)*a;
    }
    else   
        return 1;
}

// //taylor series e^x..
// int taylor_series(int x,int n){
//     return power(x,n)/factorial(n)+1;
// }

//fibonacci series..
int fib_value(int n){
    if(n==1)
        return 1;
    else if(n==0)
        return 0;
    else
        return fib_value(n-1)+fib_value(n-2);
}

// combination nCr ..
int C(int n,int r){
    if(r==0 || n==r)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}

// tower of hanoi..

int main()
{
    fun1(3);
    cout<<"\n"<<fun2(3)<<endl;
    fun3(3);
    cout<<"\nsum of n-natural number: "<<sum(5)<<endl;
    cout<<"Factorial of n(3): "<<factorial(3)<<endl;
    cout<<"power 5^3: "<<power(5,3)<<endl;
    // cout<<"taylor series e^x(2,n=3): "<<taylor_series(2,3)<<endl;
    cout<<"Fibonacci series: "<<fib_value(6)<<endl;
    cout<<"4C2: "<<C(4,2)<<endl;
}