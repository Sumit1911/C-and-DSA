#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1, num=1;
    while(i<=n) {
        int j=1;
        while (j<=n)
        {
            cout<<num<<" ";
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}