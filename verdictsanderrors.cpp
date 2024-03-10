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

//------------- RUNTIME ERRORS ---------------------------

// #include<iostream>
// using namespace std ;
// int main() {
//     int n=4;
//     int a[4];
//     for(int i=0;i<4*n;i++)  //this will give a segmentation fault due to out-of-bound index access
//     {
//         a[i]=i;
//     }
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main() {
//     int a=4/0;   //runtime error due to undefined behaviour
//     cout<<a;
//     return 0 ;
// }

// ----------- TIME LIMIT EXCEEDED -----------------------

//ॐ नमः शिवाय
// #include<bits/stdc++.h>
// using namespace std ;
// const int N=1e9;
// const int NN=1e4;
// int a[NN];

// int main(){
//     for(int i=0;i<N;i++)        // this will give TLE 
//     {
//         a[i%NN]=i;
//     }
//     return 0;
// }

// ---------------- RECURSIVE CODE ERRORS ---------------------

//ॐ नमः शिवाय
// #include<bits/stdc++.h>
// using namespace std ;
// const int N=1e9;
// const int NN=1e4;
// int a[NN];

// void func(int i)
// {
//     if(N<=i) return;
//     a[i%NN]=i;
//     func(i+1);         // large no. of recursive calls can give TLE
// }

// int main(){
//     func(0);
//     return 0;
// }

// recursive code can give runtime error too

// void func(int i)
// {   //infinite recursive calls resulting in overflowing of stack even before the time limit is reached
//     func(i+2);
//     func(i+1);
//     func(i-1);
// }