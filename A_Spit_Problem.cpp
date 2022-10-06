#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    int flag=0;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        int k = i->first + i->second;
        if(m[k]!=0 && k+m[k]==i->first)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}