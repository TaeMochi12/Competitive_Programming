// Question: Sum of all possible sub arrays.
// i) N<=10^2
// ii) N<=10^3
// iiI) N<=10^5


#include<bits/stdc++.h>
using namespace std ;
int main() {
    
    int arr[]={5,3,2,1,3};
    // i) O(N^3)
    // int ans=0;
    // for(int st=0;st<5;st++)
    // {
    //     for(int en=st;en<5;en++)
    //     {
    //         for(int i=st;i<=en;i++)
    //         {
    //             ans+=arr[i];
    //         }
    //     }
    // }
    // cout<<ans<<endl;
    
    // // ii) O(N^2)
    // int prefix[5];
    // for(int i=0;i<5;i++)
    // {
    //     if(i==0) prefix[i]=arr[0];
    //     else prefix[i]=prefix[i-1]+arr[i];
    // }
    // int ans=0;
    // for(int st=0;st<5;st++)
    // {
    //     for(int en=st;en<5;en++)
    //     {
    //         int cursum=prefix[en]-(st==0?0:prefix[st-1]);
    //         ans+=cursum;
    //     }
        
    // }
    // cout<<ans<<endl;
    
//     // iii) O(N)
//     int ans=0;
//     for(int i=0;i<5;i++)
//     {
//         ans+=(i+1)*(5-i)*arr[i];   
//     }
//     cout<<ans<<endl;
    
//     return 0 ;
}