#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5,b=10,c=100,d=5000;
    cout<<"with out setw"<<endl;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The value of d is : "<<d<<endl;
    cout<<"With setw"<<endl;

    cout<<"The value of a is : "<<setw(4)<<a<<endl;
    cout<<"The value of b is : "<<setw(4)<<b<<endl;
    cout<<"The value of c is : "<<setw(4)<<c<<endl;
    cout<<"The value of d is : "<<setw(4)<<d<<endl;

}