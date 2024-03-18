// Write a program that asks a name to say hello. Use your own function, that receives a string of characters (name) and prints on screen the hello message. (Doesn't returns anything- void type)
#include<iostream>
using namespace std;
void greet(string a){
    cout<<"Hello "<<a<<endl;
}
int main(){
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    greet(name);
    return 0;
    }