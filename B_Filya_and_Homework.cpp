#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        s.insert(k);
    }
    int l = s.size();
    if(l>3)
    cout<<"NO";
    else if(l==3)
    {
        int arr[3];
        int j=0;
        for (auto i = s.begin(); i != s.end(); i++)
        {
            arr[j]=*i;
            j++;
        }
        bool flag=0;
        int d = arr[1]-arr[0];
        if(arr[2]-d==arr[1])
        cout<<"YES";
        else
        cout<<"NO";
    }
    else
    cout<<"YES";
    return 0;
}