//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;

int freq[10];

int main(){
// int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// cin >> t ;
// while(t--){ 
    int k;
    cin>>k;
    string str[4];
    for(int i=0;i<4;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(str[i][j]>='0' || str[i][j]<='9') freq[str[i][j]-'0']++;
        }
    }
    int ans=1;
    for(int i=0;i<10;i++)
    {
        if(freq[i]>2*k) 
        {
            ans=0;
            break;
        }
    }
    if(ans==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

// }
    return 0;
}