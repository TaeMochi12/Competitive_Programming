//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;
 
int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(auto &it:arr)
    {
        cin>>it;
    }
    int sp=0;
    int sn=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<0) sn=sn+arr[i];
        else sp=sp+arr[i];
    }
    cout<<(sp+sn)*(-1)<<endl;
}
    
    return 0;
}