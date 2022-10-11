#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int row = 1; row < 2*n; row++){
        int c = row > n ? 2*n - row : row;
        // int oriNum = (row <= n) ? row : 2*n - row;
        for(int sp = 1; sp <= n-c; sp++){
            cout<<" ";
        }

        for(int num = c; num >= 1; num--){
            cout<<num;
        }

        for(int num = 2; num <= c; num++){
            cout<<num;
        }

        cout<<endl;
    }
}