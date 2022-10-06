#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int>arr, int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[maxi]<arr[i])
        maxi = i;
    }
    return maxi;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    vector<int>arr1;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        arr1.push_back(arr[i]);
    }
    
    sort(arr,arr+m);
    sort(arr1.begin(),arr1.end(),greater<int>());
    int x=0, y=0;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        while(arr[j]==0 && j<m)
        j++;
        x+=arr[j];
        arr[j]--;
    }
    j=0;
    for (int i = 0; i < n; i++)
    {
        int k = maxi(arr1,m);
        y+=arr1[k];
        arr1[k]--;
    }
    cout<<y<<' '<<x;
    return 0;
}