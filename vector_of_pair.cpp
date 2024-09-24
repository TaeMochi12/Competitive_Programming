// A vector where each element is a pair

#include<bits/stdc++.h>
using namespace std ;

void printVec(vector<pair<int,int>> &v)  //it is advised to take the vector by reference otherwise the vector will be passed as a copy and the copying takes O(N) time
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    printVec(v);
    return 0 ;
}