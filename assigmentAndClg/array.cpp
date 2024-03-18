#include<iostream>
using namespace std;

int main(){
    int a[10][10];
    int b =1;
    int c = 5;
    int d = 0;
    for (int i=0; i<=9;i++)
    {
        for (int j=0; j<=9;j++)
        {
        // if(i==j){
        //     a[i][j]=1;
        // }
            int f = (rand()%(c-b+1)+b);
            a[i][j] = f;
        }
        
    }
    for(int k= 0;k<10;k++)
    {
        for(int l = 0;l<10;l++)
        {
            if(a[k][l]==5)
            {
                d++;
            }
        }
    }
    cout << endl<<d;
       

    return 0;
    }