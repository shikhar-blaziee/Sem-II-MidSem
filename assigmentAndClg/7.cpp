// Write a recursive function that finds the #n integer of the Fibonacci sequence. Then build a minimal program to test it. For reference see Wikipedia : Fibonacci number. For any possible natural number "n", the following applies fib(n+2)= fib(n+1)+ fib(n). Also, the following are predefined fib(0)=0 fib(1)=1
#include <iostream>
using namespace std;
int fab(int x)
{
    if (x <= 0 || x == 1)
    {
        return x;
    }
    return fab(x - 1) + fab(x - 2);
}
int main(){
    int n;
    cout << "Enter the number till you want the fibonacci numbers : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fab(i) << "\t";

        return 0;
    }
}