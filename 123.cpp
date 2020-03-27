#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m],b[n][m];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    bool g=0;
       for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
           if(a[i][j]==b[j][i])
           {
               g=1;
           }
        }
    }
    if(g==1)cout<<"s";
    else cout<<"No";


}
