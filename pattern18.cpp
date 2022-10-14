#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0; row < 2*n; row++){

        int c = (row < n) ? n - row : row - n + 1;
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