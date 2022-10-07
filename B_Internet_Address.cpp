#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int n = x.length();
    string y ="";
    int i = 4;
    if(x[0]=='h')
        y+="http://";
    else{
    y+="ftp://";
    i=3;
    }
    y+=x.substr(i,1);
    i++;
    while(i<n-1)
    {
        if(x[i]=='r' && x[i+1]=='u')
        break;
        y+=x[i];
        i++;
    }
    y+=".ru";
    i+=2;
    if(i!=n)
    y+='/';
    y+=x.substr(i,n-i);
    cout<<y;
    return 0;
}