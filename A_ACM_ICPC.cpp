#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+6);
    int sum1 = 0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int sum5=0;
    int sum6=0;
    int sum7=0;
    int sum8=0;
    int sum9=0;
    int sum10=0;
    int sum11=0;
    int sum12=0;
    int sum13=0;
    int sum14=0;
    int sum15=0;
    int sum16=0;
    int sum17=0;
    int sum18=0;
    int sum19=0;
    int sum20=0;
    sum1+=arr[1]+arr[2]+arr[3];
    sum3+=arr[0]+arr[4]+arr[5];
    sum2+=arr[2]+arr[3]+arr[4];
    sum4+=arr[0]+arr[1]+arr[5];
    sum5+=arr[0]+arr[1]+arr[2];
    sum6+=arr[3]+arr[4]+arr[5];
    sum7+=arr[0]+arr[3]+arr[5];
    sum8+=arr[1]+arr[2]+arr[4];
    sum9+=arr[0]+arr[1]+arr[3];
    sum10+=arr[2]+arr[4]+arr[5];
    sum11+=arr[0]+arr[1]+arr[4];
    sum12+=arr[2]+arr[3]+arr[5];
    sum13+=arr[0]+arr[1]+arr[5];
    sum14+=arr[2]+arr[3]+arr[4];
    sum15+=arr[0]+arr[2]+arr[5];
    sum16+=arr[1]+arr[3]+arr[4];
    sum17+=arr[0]+arr[2]+arr[4];
    sum18+=arr[1]+arr[3]+arr[5];
    sum19+=arr[0]+arr[3]+arr[4];
    sum20+=arr[1]+arr[2]+arr[5];
    
    

    if(sum1==sum3 || sum2==sum4 || sum5==sum6 || sum7==sum8 || sum9==sum10 || sum11==sum12 || sum13==sum14 || sum15==sum16 || sum17==sum18 || sum19==sum20)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}