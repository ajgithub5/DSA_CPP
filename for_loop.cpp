#include<iostream>
using namespace std;

int main(){
    
    int sum=0,a=17,b=1;
    bool isprime=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1;i<=10;i++){
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    //     cout<<sum<<" ";
    // }

    for(int i=2;i<=(a/2);i++){
        if(a%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime) cout<<"Prime number"<<endl;
    else cout<<"Not a prime number"<<endl;
    

    return 0;
}