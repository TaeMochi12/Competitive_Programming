// A       I       Q       Y
//  B     H J     P R     X Z
//   C   G   K   O   S   W
//    D F     L N     T V
//     E       M       U

// Equations used: i==j || i+j==8 and %8 for repeating first 8 columns
// For repeating the pattern row wise, just make i=10 or 20 or so on and do %5 with i in eqns

#include<iostream>
using namespace std ;
int main() {
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(i==j%8 || i+j%8==8) cout<<char('A'+j);  // geting chars according to the column no.
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}

