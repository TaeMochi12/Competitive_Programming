//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr)
    {
        cin>>it;
    }
    int ans=abs(arr[0]);
    for(int i=0;i<n;i++)
    {
        ans=min(ans,abs(arr[i]));
    }
    cout<<ans<<endl;
    
    return 0; 
}
    
   
