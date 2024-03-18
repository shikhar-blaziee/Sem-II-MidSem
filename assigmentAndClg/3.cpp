// Write a program that asks for two numbers, compare them and show the maximum. Declare a function called max_two that compares the numbers and returns the maximum.

#include<iostream>
using namespace std;
int max_two(int a, int b){
    if(a>b){
        cout<<a<<" is greater";
    }else{
        cout<<b<<" is greater";
    }
}
int main(){
    int a,b;
    cout<<"enter first no : ";
    cin>>a;
    cout<<"enter second no : ";
    cin>>b;
    max_two(a,b);
    return 0;
    }