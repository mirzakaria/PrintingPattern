#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int row = 1; row < 2*n; row++){
        int totalSpace = (row <= n) ? n-row : row-n;
        int oriNum = (row <= n) ? row : 2*n - row;
        for(int sp = 1; sp <= totalSpace; sp++){
            cout<<" ";
        }

        for(int num = oriNum; num >= 1; num--){
            cout<<num;
        }

        for(int num = 2; num <= oriNum; num++){
            cout<<num;
        }

        cout<<endl;
    }
}