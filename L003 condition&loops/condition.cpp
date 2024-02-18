#include<iostream>
using namespace std;

int main() {
    // int a, b;
    // cout<<"Enter a and b : ";
    // cin>>a>>b;
    // int c;
    // cout<<"Enter c : ";
    // cin>>c;
    /**If condition*/
    // if(a>b)  {
    //     cout<<"a is : "<<a<<endl;
    // }

    /**If else condition*/
    // if(a>b)  {
    //     cout<<"a is : "<<a<<endl;
    // } else {
    //     cout<<"b is : "<<b<<endl;
    // }

    /**if else-if else condition */
    // if(a>b && a>c) {
    //     cout<<a<<" is greater!"<<endl;
    // } else if(b>a && b>c) {
    //     cout<<b<<" is greater!"<<endl;
    // } else {
    //     cout<<c<<" is greater!"<<endl;
    // }

    /**q1 */
    // int a = 2;
    // int b = a+1;
    // if((a=3)==b) {
    //     cout<<a;
    // } else {
    //     cout<<a+1;
    // }

    /**q2 */
    // int a=24;
    // if(a>20) {
    //     cout<<"Love";
    // } else if(a==24) {
    //     cout<<"Lovely";
    // } else {
    //     cout<<"Sumit";
    // }

    /**q3 */
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z') {
        cout<<ch<<" is lower case"<<endl;
    } else if(ch>='A' && ch<='Z') {
        cout<<ch<<" is upper case"<<endl;
    } else if(ch>='0' && ch<='9') {
        cout<<ch<<" is numeric"<<endl;
    }

    return 0;
}