#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter marks: ";
    cin>>m;
    if (m>80){
        cout<<"Very good";
        }
    else if (m>60 and m<=80){
        cout<<"Good";
        }
    else if (m>40 and m<=60){
        cout<<"Average";
        }
    else{
        cout<<"fail";
    }
    
    return 0;
    }