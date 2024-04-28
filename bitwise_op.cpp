#include<iostream>
using namespace std;

int main(){
    int a,b;
    a=4;
    b=6;

    //bitwise operator
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    //left and right shift operator

    cout<<(7<<1)<<endl;
    cout<<(7<<2)<<endl;
    cout<<(19>>1)<<endl;
    cout<<(19>>2)<<endl;
}