#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    int p=n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr1[i])
        {
            p=i+1;
            break;
        }
    }
    int q = n-1;
    for (int i = n-1; i >=0; i--)
    {
        if(arr[i]!=arr1[i])
        {
            q=i+1;
            break;
        }
    }
    vector<int>v;
    for (int i = p-1; i < q; i++)
    {
        v.push_back(arr[i]);
    }
    int l = v.size();
    int j = l-1;
    for (int i = p-1; i < q; i++)
    {
        arr[i] = v[j];
        j--;
    }

    bool flag=0;
    for (int i = 0; i < n; i++)
    {
        if(arr1[i]!=arr[i])
        {
            flag=1;
            break;
        }
    }
    if(p==0 && q==0)
    {
        p++;
        q++;
    }
    if(flag==1)
    cout<<"no";
    else
    cout<<"yes"<<"\n"<<p<<" "<<q;
    return 0;
}