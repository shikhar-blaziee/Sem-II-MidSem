#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area>perimeter){
        cout<<"Area is greater than perimeter"<<endl;}
    else if (area==perimeter)
    {
        cout<<"Area is equal to perimeter"<<endl;}
    else    
    {
        cout<<"Perimeter is greater than area"<<endl;}
    return 0;
    }