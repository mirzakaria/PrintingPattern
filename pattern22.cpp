#include<iostream>
using namespace std;
int main()
{ 
    int n = 5; 
    for(int row = 1; row <= n; row++){
        int f = (row % 2 == 0) ? 0 : 1;
        for(int col = 0; col < row; col++){
            cout<<f<<" ";
            f = f == 0 ? 1 : 0;
        }
        cout<<endl;
    }
}