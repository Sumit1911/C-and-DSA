#include<iostream>
using namespace std;

int main() {
    // int i = 4;
    // cout<<(++i)<<endl; //5
    // cout<<(i++)<<endl; //5, i=6
    // cout<<(--i)<<endl; //5
    // cout<<(i--)<<endl; //5, i=4

    /**Q1 */
    // int a, b=1;
    // a=10;
    // if(++a) {
    //     cout<<b;
    // } else {
    //     cout<<++b;
    // }

    /**Q2 */
    // int a = 1, b = 2;
    // if(a-- > 0 && ++b > 2) {
    //     cout<<"Stage1 - Inside If ";
    // } else {
    //     cout<<"Stage2 - Inside else";
    // }
    // cout<<a<<" "<<b<<endl;

    /**Q3 */
    // int a = 1, b = 2;
    // if(a-- > 0 || ++b > 2) {
    //     cout<<"Stage1 - Inside If ";
    // } else {
    //     cout<<"Stage2 - Inside else";
    // }
    // cout<<a<<" "<<b<<endl;

    /**Q4 */
    // int num = 3;
    // cout<<(25*(++num))<<endl;

    /**Q5 */ 
    int a = 1;
    int b = a++;
    int c = ++a;
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}

