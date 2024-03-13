//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &it:arr)
    {
        cin>>it;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
    
}