#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int c=0;
    int i = m-1;
    int sum=0;
    while(c<n && i>=0)
    {
        if(n-c>=v[i].second)
        {
            sum+=v[i].second*v[i].first;
            c+=v[i].second;
            // cout<<v[i].second*v[i].first<<" ";
        }
        else
        {
            sum+=(n-c)*v[i].first;
            // cout<<(n-c)*v[i].first<<" ";
            break;
        }
        i--;
    }
    cout<<sum;
    return 0;
}