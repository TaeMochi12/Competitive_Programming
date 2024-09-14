// You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L,R. You have to find the gcd of the array excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is not empty.

// Constraints:

// SUBTASK #1 
// 2<=T,N<=100, 1<=Q<=N, 1<=A[i]<=10^5
// 1<=L,R<=N and L<=R

// SUBTASK #2
// 2<=T,N<=10^5, 1<=Q<=N, 1<=A[i]<=10^5
// 1<=L,R<=N and L<=R
// Sum of N over all test cases will be less than or equal to 10^6

// ===============Brute force for SUBTASK #1 ====================================================================

// #include<bits/stdc++.h>
// using namespace std ;
// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         int a[n+10];
//         for(int i=1;i<=n;i++)
//         {
//             cin>>a[i];
//         }
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//             int gc=0;
//             for(int i=1;i<=l-1;i++)
//             {
//                 gc=__gcd(gc,a[i]);
//             }
//             for(int i=r+1;i<=n;i++)
//             {
//                 gc=__gcd(gc,a[i]);
//             }
//         cout<<gc<<endl;
//         }
//     }
//     return 0 ;
// }

// // TC: O(T * (N + Q * (N))) = O(T*N + T*Q*N) = 100^3 

// =============== Optimized Approach for SUBTASK #2 ====================================================================

#include<bits/stdc++.h>
using namespace std ;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0]=backward[n+1]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            forward[i]= __gcd(forward[i-1],a[i]);
        }
        for(int i=n ; i>=1; i--)
        {
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1]);
        }
    }
    return 0 ;
}

// TC: O(T * (N + N (as Q can be replaced by N))) = 10^6 : given