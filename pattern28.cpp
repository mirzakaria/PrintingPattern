#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0 ; row < 2*n-1; row++){
        int c = row <= 4 ? n-row-1 : row-n+1;
        for(int sp = 0; sp < c; sp++){
            cout<<" ";
        }
        for(int st = 0; st < n-c; st++){
            cout<<"* ";
        }
        cout<<endl;
    }
}