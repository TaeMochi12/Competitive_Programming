//ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> t ;
while(t--){ 
    int pts[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int score=0;
char t[10][10];
for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >>t[i][j];
                if(t[i][j]=='X') score=score+pts[i][j];
            }
        }

cout<<score<<endl;
}
    
    return 0;
}




// // ॐ नमः शिवाय
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cin >> t;
//     while (t--)
//     {
//         char arr[10][10];
//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         int s1 = 0;
//         int s2 = 0;
//         int s3 = 0;
//         int s4 = 0;
//         int s5 = 0;
//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 if ((i == 0 || i == 9) || (j == 0 || j == 9))
//                 {
//                     if (arr[i][j] =='X') s1++;
//                 }
//                 if ((i == 1 || i == 8) || (j == 1 || j == 8))
//                 {
//                     if (arr[i][j] =='X') s2++;
//                 }
//                 if ((i == 2 || i == 7) || (j == 2 || j == 7))
//                 {
//                     if (arr[i][j] =='X') s3++;
//                 }
//                 if ((i == 3 || i == 6) || (j == 3 || j == 6))
//                 {
//                     if (arr[i][j] =='X') s4++;
//                 }
//                 if ((i == 4 || i == 5) || (j == 4 || j == 5))
//                 {
//                     if (arr[i][j] =='X') s5++;
//                 }
//             }
//         }
//         cout<<(s1*1)+(s2*2)+(s3*3)+(s4*4)+(s5*5)<<endl;
//     }

//     return 0;
// }