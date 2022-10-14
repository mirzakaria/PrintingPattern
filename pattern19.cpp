#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0; row < 2*n - 1; row++){

        int c = (row <= n-1) ? row + 1 : 2*n - row - 1;
        for(int st = 0; st < c; st++){
            cout<<"*";
        }
        for(int sp = 0; sp < 2*(n-c); sp++){
            cout<<" ";
        }
        for(int st = 0; st < c; st++){
            cout<<"*";
        }
        cout<<endl;
    }
}