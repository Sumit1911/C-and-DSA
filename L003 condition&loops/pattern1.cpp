#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;  //row
    while(i<=n) {
        int j=1;  //col
        while(j<=n) {
            // cout<<"*";
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}