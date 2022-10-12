#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int row = 0; row < n; row++){
        for(int sp = row; sp < n-1; sp++){
            cout<<" ";
        }
        for(int st = 0; st < n; st++){
            if(row == 0 || row == n-1 || st == 0 || st == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}