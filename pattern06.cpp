#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int r=0; r<n; r++){
        for(int sp=0; sp<n-r; sp++){
            cout<<"  ";
        }
        for(int c=0; c<=r; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}