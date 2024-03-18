#include<iostream>
using namespace std;

int main(){
    // arrays
    // arrays are udes when datatype of all elements are same
    int marks[] ={20,25,30,40};
    
    int mathMarks[4];
    mathMarks[0]=10;
    mathMarks[1]=20;
    mathMarks[2]=30;
    mathMarks[3]=40;

    marks[3]=10;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"mathmarks : \n";
    // you can change the value of array
    for (int i = 0; i < 4; i++)
    {
        cout<<mathMarks[i]<<endl;
    }
    
    // pointers in arrays

    int * p=marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;

    return 0;
    }