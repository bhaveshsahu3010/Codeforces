#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        c++;
    }
    int k=c/2;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(j<c){
        if(arr[i]<0 && arr[i]%2!=0)
        {
            if(j!=k)
            {
                j++;
                arr[i] = arr[i]/2 - 1;
            }
            else
            {
                arr[i]/=2;
            }
        }
        }
    }
    cout<<k<<" "<<j<<"\n";
    for (int i = 0; i < n; i++)
    {
        if(j<c){
        if(arr[i]>0 && arr[i]%2!=0)
        {
            if(j!=k)
            {
                j++;
                arr[i] = arr[i]/2 + 1;
            }
            else
            arr[i]/=2;
            
        }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        arr[i]/=2;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}