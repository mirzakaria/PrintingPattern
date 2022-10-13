#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    
    for(int row = 1; row <= n; row++){
        char ch = 'A';
        ch = ch + n - row;
        for(int col = row; col <= n; col++){
            cout<<ch--<<" ";
        }
        cout<<endl;
    }
}