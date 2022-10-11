#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row <= 2*n - 1; row++){
        int totalSpace = (row <= n) ? n-row : row-n;
        for(int sp = 1; sp <= totalSpace; sp++){
            cout<<" ";
        }

        int star = (row <= n) ? (2*row - 1) : (2*n - 2*row + 9);

        for(int col = 1; col <= 2*n - 1; col++){
            if(col == 1 || col == star)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}