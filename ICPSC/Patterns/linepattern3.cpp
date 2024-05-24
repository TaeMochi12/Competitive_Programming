//     *
//    *
//   *
//  *
// *

// Equation used: i+j=c, here c=n-1 by putting i=0 and j=4
// i.e. i==n-1-j

#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n-1-j) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    