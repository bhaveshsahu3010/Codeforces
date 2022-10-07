#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int n;
    cin>>n;
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int flag=0;
    string y="";
    for (int i = 0; i < n; i++)
    {
        if(v[i].substr(0,l) == s)
        {
            y+=v[i];
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<y;
    else
    cout<<s;
    return 0;
}