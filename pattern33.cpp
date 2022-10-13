#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch = 'a';
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            char res = ch % 2 == 0 ? ch - 32 : ch;
            cout<<res<<" ";
            ch++;
        }
        cout<<endl;
    }
}