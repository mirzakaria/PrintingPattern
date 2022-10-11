#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int totalRow = 2*n-1;
    for(int r=0; r<totalRow; r++){
        int col=r;
        if(r>=n)
            col = totalRow - r - 1;
        for(int c=0; c<=col; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}