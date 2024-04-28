#include<iostream>
using namespace std;

int main() 
{
    int n,f=0;
    int i=2;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"The number entered is: "<<n<<endl;
    while(i<=n-1)
    {
        if (n%i==0){
            f=1;
            break;
            }
        cout<<i<<"iteration"<<endl;
        i=i+1;    
    }    
    f==1? cout<<n<<" is not prime."<<endl:cout<<n<<" is prime."<<endl;
    // if (f==1){cout<<n<<" is not prime."<<endl;}
    // else{cout<<n<<" is prime."<<endl;}
    return 0;
}