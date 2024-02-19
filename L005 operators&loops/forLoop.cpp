#include<iostream>
using namespace std;

int main() {
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++) {
    //     cout<<i<<" ";
    // }

    // int i = 1;
    // for(; i<=n;) {
    //     cout<<i<<" ";
    //     i++;
    // }

    // int i = 1;
    // for(; ;) {
    //     if(i<=n) {
    //         cout<<i<<" ";
    //     } else {
    //         break;
    //     }
    //     i++;
    // }

    // for(int a = 0, b = 1; a>=0 && b>=1; a--, b--) {
    //     cout<<a<<" "<<b<<endl;
    // }
    // for(int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2; a--, b--, c--) {
    //     cout<<a<<" "<<b<<" "<<c<<endl;
    // }

    /**print sum of n number */
    // int n;
    // cin>>n;
    // int sum = 0;
    // for(int i=1; i<=n; i++) {
    //     sum+=i;
    // }
    // cout<<sum<<endl;

    /**fibonacci series */
    // int n; 
    // cin>>n;
    // int prev=0, next=1;
    // int fibo;
    // cout<<prev<<" "<<next<<" ";
    // for(int i=2; i<=n; i++) {
    //     fibo = prev+next;
    //     cout<<fibo<<" ";
    //     prev=next;
    //     next=fibo;
    // }

    /**prime or not */
    // int n;
    // cin>>n;
    // bool isPrime = 1;
    // for(int i=2; i<=n-1; i++) {
    //     if(n%i==0) {
    //         isPrime = 0;
    //         break;
    //     } 
    // }
    // if(isPrime == 0) {
    //     cout<<"Not Prime"<<endl;
    // } else {
    //     cout<<"Prime"<<endl;
    // }

    /**use of continue */
    // for(int i=0; i<5; i++) {
    //     cout<<"Hi"<<endl;
    //     cout<<"Hey"<<endl;
    //     continue;
    //     cout<<"Reply toh"<<endl;
    // }

    /**Q */
    for(int i=0; i<5; i++) {
        for(int j=1; j<=5; j++) {
            cout<<i<<" "<<j<<endl;
        }
    }
    
    return 0;
}