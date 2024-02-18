#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        //space print kar lo
        int space = n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        //part1 number print kar lo
        int col = 1;
        while (col<=row) 
        {
            cout<<col;
            col++;
        }
        //part2 number print kar lo
        int col2 = 1;
        while (col2<=row-1)
        {
            cout<<row-col2;
            col2++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}