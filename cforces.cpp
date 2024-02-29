#include<bits/stdc++.h>
using namespace std ;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       string x,s;
       cin>>x>>s;
       int count=6,f=0,res=0;
       while(count>=0)
       {
        if(x.find(s)!=string::npos)
        {
            f=1;
            break;
        }
        res++;
        x+=x;
        count--;
       }
       if(f==1) cout<<res<<endl;
       else cout<<-1<<endl;
    }
    return 0 ;
}