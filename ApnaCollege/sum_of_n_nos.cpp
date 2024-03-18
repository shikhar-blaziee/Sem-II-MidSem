#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter the no here : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    cout<<"The sum is : "<<s;
}