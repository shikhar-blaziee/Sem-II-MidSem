#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first side: ";
    cin>>a;
    cout<<"Enter second side: ";
    cin>>b;
    cout<<"Enter third side: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b ){
        cout<<"The sides can form a triangle"<<endl;}
    else
    {
        cout<<"The sides cannot form a triangle"<<endl;
    }
    return 0;
    }