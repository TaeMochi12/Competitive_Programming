// ॐ नमः शिवाय
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        if (n > 10)
            cout << str[0] << n - 2 << str[n - 1] << endl;
        else
            cout << str << endl;
    }

    return 0;
}