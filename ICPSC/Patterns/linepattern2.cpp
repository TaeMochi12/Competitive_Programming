// *
//  *
//   *
//    *
//     *

// Equation used: i=j+c , here c=0
// i.e. i==j

#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) cout<<'*';
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}

// for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         cout<<'*'<<endl;
//     }