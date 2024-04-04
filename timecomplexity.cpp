// #include<iostream>
// using namespace std ;
// int main() {
//     int x;
//     int sum;
//     sum=x+x;
//     int n;
//     cin>>n;
//     // 5 iterations till here
//     for(int i=0;i<n;i++)        // 3n iterations in loop
//     {
//         int y;
//         y=5;
//         y++;
//     }
//     return 0 ;
// }

// // n < 100000
// // O(5)+O(3*n)= O(n)

// ------- EXAMPLES -------------------------------------

// // O(N) :

// N< 100000
// a[i]< 100000

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int a[99999];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     return 0 ;
// }

// // TC: o(1)+o(1)+o(1)+o(n)+o(n)+o(n)+o(n)+o(n)
// // TC = o(n) = o(10^5)

// // O(N^2) :

// // N< 100000
// // a[i]< 100000

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int a[99999];
//     for(int i=0;i<n;i++)
//     {
//         for(int i=0;i<n;i++)
//     {
//         // cin>>a[i];
//     }
//     }
//     return 0 ;
// }

// // TC: o(1)+o(1)+o(1)+o(n^2)
// // TC = o(n^2) = o(10^10) => TLE

// // O(log(n)):

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int ct=0;
//     while(n>0)
//     {
//         n=n/2;
//         ct++;
//     }
//     return 0 ;
// }

// // o(1)+o(1)+o(ct)
// // o(1)+o(1)+o(log(n))
// // TC: O(log(n))

// // TC that doesn't look n^2

// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     int ct=0;
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             ct++;
//         }
//     }
//     return 0 ;
// }

// // TC: O(n^2)

// -----------------------------------------------------------

// Given an array of size n, print sum of array in each test case.
// Constraints:
// 1 <= T <= 1000
// 1 <= N <= 1000
// 1<= a[i] <= 1000

// //ॐ नमः शिवाय
// #include<bits/stdc++.h>
// using namespace std ;

// int main(){
// int t ;
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cin >> t ;
// while(t--){ 
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         sum=sum+x;
//     }
// }
    
//     return 0;
// }

// TC: O(T*N) => O(n^2) => o(10^6)

// But if:
// Constraints:
// 1 <= T <= 100000
// 1 <= N <= 100000
// 1<= a[i] <= 1000
// Sum of N over all test cases is < 10^7

// //ॐ नमः शिवाय
// #include<bits/stdc++.h>
// using namespace std ;

// int main(){
// int t ;
// int ct=0;
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cin >> t ;
// while(t--){ 
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         sum=sum+x;
//         ct++;
//     }
// }
    
//     return 0;
// }

// // TC: O(ct) = O(10^7)