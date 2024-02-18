#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int row = 1;

    while (row<=n)
    {
        //part1 number print kar lo
        int col = 1;
        while (col<=(n-row+1))
        {
            cout<<col;
            col++;
        }
        //part1 star print kar lo
        int star = row-1;
        while (star)
        {
            cout<<"*";
            star--;
        }
        //part3 star print kar lo
        int star1 = row-1;
        while (star1)
        {
            cout<<"*";
            star1--;
        }
        //part4 number print kar lo
        int col1 = n-row+1;
        // while (col1<=(n-row+1))
        // {
        //     cout<<(n-row+col1);
        //     col1++;
        // }
         while (col1>=1)
        {
            cout<<col1;
            col1--;
        }
        
        cout<<endl;
        row++;  
    }
    return 0;
}