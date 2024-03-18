#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
//call by reference using pointers
void swap(int *a, int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    // * --->> dereferencing  operator(value at given address)
}
    
int main(){ 
    int x=4,y=5;
    cout<<"the sum is "<<sum(x,y)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(&x,&y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    // & --->> address of operator
    

    return 0;
    }