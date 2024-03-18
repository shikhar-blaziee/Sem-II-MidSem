// Write a program that asks the user for an integer number and find
// the sum of all natural numbers upto that number.
#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<sum(a);

}