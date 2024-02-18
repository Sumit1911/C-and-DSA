#include<iostream>
using namespace std;

int main() {
    // int n;
    // int i = 1;
    // cout<<"Enter number : ";
    // cin>>n;
    // while (n>=i)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }
    
    /**Q-sum of 1 to n */
    // int n;
    // int i = 1, sum = 0;
    // cout<<"Enter number : ";
    // cin>>n;
    // while (n>=i)
    // {
    //     sum+=i;
    //     i++;
    // }
    // cout<<"sum is : "<<sum<<endl;

    /**Q-sum of 1 to n only even number */
    // int n;
    // int i = 1, sum = 0;
    // cout<<"Enter number : ";
    // cin>>n;
    // while (n>=i)
    // {
    //     if(i%2==0) {
    //         sum+=i;
    //     }
    //     i++;
    // }
    // cout<<"sum is : "<<sum<<endl;

    /**check prime or not */
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i = 2;
    while(i<n) {
        //divide hogya, not prime
        if(n%i==0) {
            cout<<n<<" is not Prime"<<endl;
        } else {
            cout<<n<<" is prime"<<endl;
        }
        i++;
    }
    // cout<<n<<" is prime"<<endl;
    
    return 0;
}