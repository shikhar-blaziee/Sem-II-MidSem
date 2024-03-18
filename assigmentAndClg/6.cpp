// Basically the same as exercise 5, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
#include<iostream>
#include<cmath>
using namespace std;
int division(int a,int b){
    return a/b;
}
void add(int a,int b, float& result){
    result= a+b;
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
    float a,b,result=0;
    cout<<"Enter 2 number : "<<endl;
    cin>>a>>b;
    char c;
    cout<<"which opertaion you want (+,-,*,/,^,% only):"<<endl;
    cin>>c;
    if (c == '+')
    {
        add(a,b,result);
        cout<<result;
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