#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0; row < n; row++){
        for(int col = n - row; col <= n; col++){
            char ch = 65 + col - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}