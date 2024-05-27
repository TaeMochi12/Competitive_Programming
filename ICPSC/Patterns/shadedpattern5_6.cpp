// Numbers aren't supposed to be printed, it is showing regions for n=6
// *   *   *   *   *   *   *   *
//  * * * * * * * * * * * * * *
//   * 1 * 2 * 3 * 4 * 5 * 6 *
//  * * * * * * * * * * * * * *
// *   *   *   *   *   *   *   *

// Equations used: i+j%4==5-1 and i==j%4, %4 fro repeating the first 4 columns

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<4*n+5;j++)
//         {
//             if(i+j%4==5-1 || i==j%4) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// *   *   *   *   *   *   *   *
//  * * * * * * * * * * * * * *
//   * 1 * 2 * 3 * 4 * 5 * 6 *
//  * * * * * * * * * * * * * *
// *   *   *   *   *   *   *   *
//  * * * * * * * * * * * * * *
//   * 1 * 2 * 3 * 4 * 5 * 6 *
//  * * * * * * * * * * * * * *
// *   *   *   *   *   *   *   *
// continued

// Same as above just do % with i too to repeate the first 4 rows also

#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<4*n+5;j++)
        {
            if(i%4+j%4==5-1 || i%4==j%4) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}