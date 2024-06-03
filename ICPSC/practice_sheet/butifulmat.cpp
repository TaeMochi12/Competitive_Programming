//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;

int main(){
// int t ;
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cin >> t ;
// while(t--){ 

// }
    int mat[5][5];
    int f=0;
    int l=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1) 
            {
                f=i;
                l=j;
            }
        }
    }
    cout<<abs(2-f)+abs(2-l)<<endl;
    return 0;
}