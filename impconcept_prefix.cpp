// Question link - https://www.hackerrank.com/challenges/crush/problem

// ========================== Brute force =============================

// #include<bits/stdc++.h>
// using namespace std ;
// const int N=1e7+10;
// long long ar[N];
// int main() {
//     int n,m;
//     cin>>n>>m;
//     while(m--)
//     {
//         int a,b,d;
//         cin>>a>>b>>d;
//         for(int i=a;i<=b;++i)
//         {
//             ar[i]+=d;
//         }
//     }
//     long long mx=-1;
//     for(int i=1;i<=n;++i)
//     {
//         if(mx<ar[i]) mx=ar[i];
//     }
//     cout<<mx<<endl;
//     return 0 ;
// }

// // TC: O(M*N+N) = 2*10^5 * 10^7 => TLE

// ========================== Optimized Approach =============================

#include<bits/stdc++.h>
using namespace std ;
const int N=1e7+10;
long long ar[N];
int main() {
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;
    }
    for(int i=1;i<=n;i++)
    {
        ar[i]+=ar[i-1];
    }
    long long mx=-1;
    for(int i=1;i<=n;++i)
    {
        if(mx<ar[i]) mx=ar[i];
    }
    cout<<mx<<endl;
    return 0 ;
}

// TC: O(M+N) = 2*10^5 + 10^7 => 10^7