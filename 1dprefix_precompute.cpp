// Given an array a of N integers. Given Q queries and in each query given L and R, print sum of array elements from index L to R(L,R included)

// Constraints
// 1<=N<=10^5
// 1<=a[i]<=10^9
// 1<=Q<=10^5
// 1<=L, R<=N

// ====================== OLD METHOD - TLE ==========================

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=1;i<=n;i++)
//     {
//         cin>>arr[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         long long sum=0;
//         for(int i=l;i<=r;i++)
//         {
//             sum+=arr[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0 ;
// }

// // TC : O(N)+O(Q*N)= 10^10

// ============== PREFIX SUM FOR 1D ARRAY =========================

#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>>n;
    int arr[n];
    long long pf[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        pf[i]=pf[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0 ;
}

// TC : O(N)+O(Q)= 10^5