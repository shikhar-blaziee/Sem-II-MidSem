#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    if(x==0 and y==0){
        cout<<"The point lies on the origin"<<endl;
    }
    else if(x>0 and y>0){
        cout<<"The point lies in the first quadrant"<<endl;
    }
    else if(x<0 and y<0){
        cout<<"The point lies in the third quadrant"<<endl;
    }
    else if(x>0 and y<0){
        cout<<"The point lies in the fourth quadrant"<<endl;
    }
    else{
        cout<<"The point lies in the second quadrant"<<endl;
    }    
    return 0;
    }