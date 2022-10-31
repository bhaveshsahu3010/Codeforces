#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    string x;
    cin>>x;
    string y="";
    for (int i = 0; i < n; i++)
    {
        if(n%2!=0)
        {
            if(i%2!=0)
            {
                y=x[i]+y;
            }
            else
            y+=x[i];
        }
        else
        {
            if(i%2==0)
            {
                y=x[i]+y;
            }
            else
            y+=x[i];
        }
    }
    cout<<y;
}