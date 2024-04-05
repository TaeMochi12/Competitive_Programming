// Given a number n. Print its factorial.
// Constraints : 1 <= N <= 100

// This will not work for larger values
// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     long long fact=1;
//     for(int i=2;i<n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
//     return 0 ;
// }

// Given a number n. Print its factorial.
// Constraints : 1 <= N <= 100
// Print answer modulo M where M=47

// This will give the answer even smaller than M for greater values also
// #include<iostream>
// using namespace std ;
// int main() {
//     int n;
//     cin>>n;
//     long long fact=1;
//     for(int i=2;i<n;i++)
//     {
//         fact=(fact*i)%47;
//     }
//     cout<<fact;
//     return 0 ;
// }