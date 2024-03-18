#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the greatest number"<<endl;
        }
        else{
            cout<<c<<" is the greatest number"<<endl;
        }
    }else{
        if (b>c){
            cout<<b<<" is the greatest number"<<endl;
        }
        else{
            cout<<c<<" is the greatest number"<<endl;
        }
    }
}