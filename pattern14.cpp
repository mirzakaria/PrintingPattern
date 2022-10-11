#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row <= n; row++){
        for(int sp = 1; sp < row; sp++){
            cout<<" ";
        }
        for(int col = 1; col <= 2*n - 1; col++){
            if(row == 1 || col == 1 || col == 2*n - (2*row - 1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}