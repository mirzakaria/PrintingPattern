#include<iostream>
using namespace std;
int main()
{ 
    int n = 5; 
    int num = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}