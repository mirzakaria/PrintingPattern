#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0; row < 2*n; row++){
        int c = row <= n-1 ? row + 1 : 2*n - row;
        for(int st = 0; st < c; st++){
            if(st == 0 || st == c-1) cout<<"*";
            else cout<<" ";
        }
        for(int sp = 0; sp < 2*n - 2*c; sp++){
            cout<<" ";
        }
        for(int st = 0; st < c; st++){
            if(st == 0 || st == c-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}