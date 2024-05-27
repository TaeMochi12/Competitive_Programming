// 55555555555
// 54444444445
// 54333333345
// 54322222345
// 54321112345
// 54321012345
// 54321112345
// 54322222345
// 54333333345
// 54444444445
// 55555555555

#include<iostream>
using namespace std ;
int main() {
    for(int i=0;i<=10;i++)
    {
        for(int j=0;j<=10;j++)
        {
            cout<<max(abs(i-5),abs(j-5));
        }
        cout<<endl;
    }
    return 0 ;
}