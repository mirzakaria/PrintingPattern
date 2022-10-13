#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int row = 1; row <= n; row++){
        for(int num = 1; num <= row; num++){
            cout<<num;
        }
        for(int sp = 1; sp <= 2*n - 2*row; sp++){
            cout<<" ";
        }
        for(int num = row; num >= 1; num--){
            cout<<num;
        }
        cout<<endl;
    }
}