// Q1. Write a program that calculates 6^5. Declare your own function to do this
#include<iostream>
using namespace std;
int power(int a, int b){
    int c=1;
    for(int i=0;i<b;i++){
        c=c*a;
    }
    return c;
}
int main(){
    int a=6,b=2;
    cout<<power(a,b);
    return 0;
    }