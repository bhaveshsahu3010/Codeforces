#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
using namespace std;

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,h;
        cin>>n>>w>>h;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int m = -1e8;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i])
            {
                if(b[i]+h - a[i]-w > m)
                {
                    m = b[i]+h - a[i]-w;
                    flag=0;
                }
            }
            else if(a[i]>b[i])
            {
                if(a[i]-w - b[i]+h > m)
                {
                    m = a[i]-w - b[i]+h;
                    flag=1;
                }
            }
        }
        if(m!=-1e8){if(flag==0)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] += m ;
            }
            
        }
        else
        for (int i = 0; i < n; i++)
        {
            a[i]-=m;
        }}
        bool flag1=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>b[i])
            {
                if(a[i]-w > b[i]-h)
                {
                    // cout<<'a';
                    flag1=1;
                    break;
                }
            }
            else if(b[i]>a[i])
            {
                if(b[i]+h>a[i]+w)
                {
                    // cout<<'b';
                    flag1=1;
                    break;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" "<<b[i]<<"\n";
        // }
        
        if(flag1==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        
    }
    return 0;
}