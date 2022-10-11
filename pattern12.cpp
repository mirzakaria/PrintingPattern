#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int r=0; r<2*n; r++){
        int totalSpace = r;
        int totalStar = n-r;
        if(r>=n){
            totalSpace = 2*n - r - 1;
            totalStar = r - 4;
        }
        for(int sp=0; sp<totalSpace; sp++){
            cout<<" ";
        }
        for(int c=0; c<totalStar; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}