#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    sum += sum;
    int count = 1;
    for(int row = 0; row < n; row++){
        for(int sp = 0; sp < row; sp++){
            cout<<"  ";
        }
        for(int num = 0; num < 2*n - 2*row; num++){
            int temp; 
            if(num < n-row){
                cout<<count<<" ";
                temp = count;
                temp = sum - temp + 1;
                count++;
            }
            else{ 
                cout<<" "<<temp++;
            }     
        }
        cout<<endl;
    }
    
}