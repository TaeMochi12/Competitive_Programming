// diamond shape rhombus like structure around 0 for each no.

// 1098765678910
// 98765456789
// 87654345678
// 76543234567
// 65432123456
// 54321012345
// 65432123456
// 76543234567
// 87654345678
// 98765456789
// 1098765678910

#include<iostream>
using namespace std ;
int main() {
    for(int i=0;i<=10;i++)
    {
        for(int j=0;j<=10;j++)
        {
            cout<<abs(i-5)+abs(j-5);
        }
        cout<<endl;
    }
    return 0 ;
}