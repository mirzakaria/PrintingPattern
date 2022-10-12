#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    for(int row = 1; row <= n; row++){
        for(int col = row; col <= n; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}