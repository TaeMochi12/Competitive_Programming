// Print factorial of the given number.
// Constraints:
// 1<=T<=10^5
// 1<=N<=10^5
// Print answer modulo 10^9+7

// ========================================================== OLD Method which will give TLE ==============================================================

// #include<bits/stdc++.h>
// using namespace std ;
// int main() {
//     const int M=1000000007;
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         long long fact=1;
//         for(int i=2;i<=n;i++)
//         {
//             fact=(fact*i)%M;
//         }
//         cout<<fact<<endl;
//     }
//     return 0 ;
// }

// TC : O(T*N) = 10^10

// =========================================================== PRE COMPUTATION TECHNIQUE ==================================================================

#include<bits/stdc++.h>
using namespace std ;
int main() {
    const int M=1000000007;
    
    // Pre computation of factorials
    int N=100010;
    long long fact[100010];
    fact[0]=fact[1]=1;
    for(int i=2;i<=N;i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    return 0 ;
}

// TC: O(T)+O(N)= 10^5