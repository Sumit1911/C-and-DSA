#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=n)
//         { 
//             cout<<ch<<" ";
//             col++;
//         }
//         ch++;
//         cout<<endl;
//         row++; 
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         char ch='A';
//         while (col<=n)
//         { 
//             cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++; 
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=n)
//         { 
//             cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++; 
//     }
//     return 0;
// }



// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         char ch='A';
//         while (col<=n)
//         { 
//             cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++; 
//     }
//     return 0;
// }

int main() {
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while (row<=n)
    {
        int col=1;
        char value = ch;
        while(col<=n)
        { 
            cout<<value<<" ";
            col++;
            value++;
        }
        cout<<endl;
        row++; 
        ch++;
    }  
    return 0;
}


