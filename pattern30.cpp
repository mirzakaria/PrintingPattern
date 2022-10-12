#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row <= n; row++){
        for(int sp = 1; sp <= n - row; sp++){
            cout<<"  ";
        }
        for(int num = row; num >= 1; num--){
            cout<<num<<" ";
        }
        for(int num = 2; num <= row; num++){
            cout<<num<<" ";
        }
        cout<<endl;

    }
}