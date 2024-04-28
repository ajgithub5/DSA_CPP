#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cin>>n;
    row = 1;
    while(row<=n){
        col = 1;
        int val=n-row+1;
        while(col<=val){
            cout<<col;
            col=col+1; 
        }
        int start=1;
        while(start<=row-1){
            cout<<'*';
            start=start+1;
        }
        int start3 =n;
        while(start3<=n+row-2){
            cout<<'*';
            start3=start3+1;
        }
        int col4=n+1;
        int start4=n-row+1;    
        while(col4<=(2*n-row+1)){
            cout<<start4;
            start4=start4-1;
            col4=col4+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
