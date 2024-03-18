// Write a program that performs arithmetic division. The program will use two integers, a and b (obtained by the user) and will perform the division a/b, store the result in another integer c and show the result of the division using cout. In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner.
#include<iostream>
#include<cmath>
using namespace std;
int division(int a,int b){
    return a/b;
}
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int modulo(int a,int b){
    return a%b;
}
int power(int a,int b){
    return pow(a,b);
}

int main(){
    int a,b;
    cout<<"Enter 2 number : "<<endl;
    cin>>a>>b;
    char c;
    cout<<"which opertaion you want (+,-,*,/,^,% only):"<<endl;
    cin>>c;
    if (c == '+')
    {
        cout<<add(a,b);
    }else if (c == '-')
    {
        cout<<subtract(a,b);
    }else if (c == '*')
    {
        cout<<multiply(a,b);
    }else if (c == '/')
    {
        cout<<division(a,b);
    }else if (c == '%')
    {
        cout<<modulo(a,b);
    }else if (c == '^')
    {
        cout<<power(a,b);
    }else{
        cout<<"invalid opertaion";
    }
    
    
    return 0;
    }