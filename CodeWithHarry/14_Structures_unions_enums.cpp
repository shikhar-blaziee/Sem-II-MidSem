#include<iostream>
using namespace std;

// Structures
 

struct employee
    {
        int id;
        char favchar;
        float salary;
    };

    //  union - can use one datatype at a time

    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
    

int main(){
    struct employee blazie;
    struct employee shikhar;
    // blazie.id=188;
    // blazie.favchar='c';
    // blazie.salary=300000;
    // cout<<"blazie salary is "<<blazie.salary<<endl;
    // cout<<"blazie favchar is "<<blazie.favchar<<endl;
    // cout<<"blazie id is "<<blazie.id<<endl;

     
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice;

    enum meal{breakfast, lunch , dinner};
    cout<<breakfast;
    return 0;
    }