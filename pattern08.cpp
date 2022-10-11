#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int r=0; r<n; r++){
        for(int sp=0; sp<n-r-1; sp++){
            cout<<"  ";
        }
        for(int c=0; c<2*r+1; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}