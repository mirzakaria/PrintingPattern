#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col < n; col++){
            if(row == 1 || row == n || col == 1 || col == n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
