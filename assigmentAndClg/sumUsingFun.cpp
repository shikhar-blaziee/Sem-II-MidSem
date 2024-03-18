#include<iostream>
using namespace std;
int sum(int a, int b){/*formal parameters*/
    int c = a+b;
    return c;
}
void summ(int a, int b){/*formal parameters*/
    int c = a+b;
    cout<<"The sum is: "<<c<<endl;
}

int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<sum(num1, num2)<<endl;/*actual parameters*/
    summ(num1, num2);/*actual parameters*/
    return 0;
    }