#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter no here : ";
    cin>>a;
    cout<<"Enter no here : ";
    cin>>b;
    cout<<"Enter no here : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }else{
        if(b>c){
            cout<<b<<" is greatest";
        }else{
            cout<<c<<" is greatest";

        }
    }

}