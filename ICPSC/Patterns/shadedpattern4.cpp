//    *
//   ***
//  *****
// *******   

// Equations of line used:
// i) i+j=c where c= n-1 by putting i=0 and j=n-1 i.e. 3 so 0+3=n-1
// ii)lly i=j+c where c=(-n-1) so i=j-n+1

// For region under the 2 lines:
// below i) i+j will increase so i+j>=
// below ii) i will increase so i>=

#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if((i+j>=n-1) && (i>=j-n+1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}