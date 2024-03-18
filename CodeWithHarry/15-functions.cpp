#include<iostream>
using namespace std;
// a,b are *formal* arguments
int sum(int a, int b){
    int c = a+b;
    return c;
}
void g(){
    cout<<"hello\n";
}

int main(){
    g();
    int n1,n2;
    cout<<"enter 1st no : "<<endl;
    cin>>n1;
    cout<<"enter 2nd no : "<<endl;
    cin>>n2;
    // n1 n2 are *actual* parameter
    cout<<"the sum is "<<sum(n1,n2);
    
    return 0;
    }