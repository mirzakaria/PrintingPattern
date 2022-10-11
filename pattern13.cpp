#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row <= n; row++){
        for(int sp = row; sp < n; sp++){
            cout<<" ";
        }
        for(int col = 1; col <= 2*n - 1; col++){
            if(row == n || col == 1 || col == 2*row - 1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}