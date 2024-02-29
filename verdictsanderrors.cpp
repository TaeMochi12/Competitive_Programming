//----------- COMPILATION ERROR -------------------------------

// #include<iostream>
// using namespace std ;
// int main() {
//     int a=10  //gives a compilation error because of the syntax error:missing semicolon
//     cout<<a;
//     return 0 ;
// }

//------------ MEMORY LIMIT EXCEEDED ERROR --------------------------

// #include<iostream>
// using namespace std ;
// const int N=1e8;  //an array of order > 1e7
// int a[N];
// int main() {
//     for(int i=0;i<N;i++)
//     {
//         a[i]=i;
//     }
//     cout<<a[N-1];    //this code runs here locally but the online coding website compilers throw an error as the memory size limit isn't this large 
//     return 0 ;
// }