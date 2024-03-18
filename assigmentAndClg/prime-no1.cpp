#include <iostream>
using namespace std;
int main(){
    int i,j;
    bool f;
    for( i =10; i<=60;i++)   
        f=false;
        for(j =2; j<i;j++)   
        {
            if(i%j==0)
            {
                f=true;
                break;
            }
        }
        if(f==false){
                cout<<i;
            }
    }