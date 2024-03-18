#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=10;i<=60;i++){
        cout<<"The table of "<<i<<" - ";
        for(j=1;j<=10;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}