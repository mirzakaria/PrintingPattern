#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    int totalRow = 2*n - 1;
    for(int row = 1; row <= totalRow; row++){
        int c = row <= n ? row : 2*n - row;
        for(int num = 0; num < c; num++){
            cout<<n - num<<" ";
        }

        for(int num = 0; num < totalRow - 2*c; num++){
            cout<<n-c+1<<" ";
        }

        for(int num = n-c+1; num <= n; num++){
            if(num != 1) cout<<num<<" ";
        }
        cout<<endl;
    }
}