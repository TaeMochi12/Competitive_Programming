// Given array a of N integers. Given Q queries 
// and in each query given a number X, print count of that number in 
// array.

// Constraints:
// 1<=N<=10^5
// 1<=a[i]<=10^7
// 1<=T<=10^5

// ========================================================= OLD Method => TLE ============================================================================

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         int ct=0;
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]==x) ct++;
//         }
//         cout<<ct<<endl;
//     }
//     return 0 ;
// }

// TC : O(N)+O(T*N) = O(N^2) = 10^10

// ==================================================== HASHING- MAP (PRE COMPUTATION) ==========================================================================

// #include<bits/stdc++.h>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     unordered_map<int,int> mp;
//     for(int i=0;i<n;i++)
//     {
//         mp[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         cout<<mp[x]<<endl;
//     }
//     return 0 ;
// }

// ==================================================== HASHING (PRE COMPUTATION) ==========================================================================

#include<bits/stdc++.h>
using namespace std ;

const int N=10000010;
int hs[N];  // hash-array
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hs[arr[i]]++;   // hashing
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hs[x]<<endl;
    }
    return 0 ;
}