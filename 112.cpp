#include<bits/stdc++.h>
#define ll long long int
#define v vector
using namespace std;
int main()
{
    v<ll>v1;
    v<ll>v2;
    ll n;
    cin>>n;
    while(n--)
    {ll a;cin>>a; v1.push_back(a);}
    sort(v1.begin(),v1.end());
    for(ll i=0;i<v1.size();i++)if(v1[i]!=v1[i+1]) v2.push_back(v1[i]);
    sort(v2.begin(),v2.end(),greater<int>());
for(ll i=0;i<3;i++)cout<<v2[i]<<" ";
}
