#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    vector<pair<char,char>>v;
    set<char>s;
    for (int i = 0; i < 3; i++)
    {
        string x;
        cin>>x;
        if(x[1]=='>')
        v.push_back(make_pair(x[0],x[2]));
        else
        v.push_back(make_pair(x[2],x[0]));
        s.insert(x[0]);
        s.insert(x[2]);
        
    }
    map<char,int>m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i].first]++;
    }
    if(m.size()==3 || m.size()==1)
    cout<<"Impossible";
    else
    {
        string y = "";
        auto j = m.begin();
        if(j->second==2)
        {
            y+=j->first;
            j++;
            y=j->first+y;
        }
        else
        {
            y+=j->first;
            j++;
            y+=j->first;
        }
        for (auto i = s.begin(); i != s.end(); i++)
        {
            if(*i!=y[0] && *i!=y[1])
            {
                y=*i +y;
                break;
            }
        }
        cout<<y;
    }
    
    return 0;
}