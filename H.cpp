#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define shady ios_base::sync_with_stdio(false);cin.tie(NULL);
const int mod=1e9+7;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
     //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    shady
    ll t;
   // cin>>t;
   // while(t--)
   // {
        ll n;
        cin>>n;
       if(n==1){cout<<1<<"\n"<<1<<" "<<1;return 0;}
       cout<<lcm(n,n-1)<<"\n";
       cout<<n<<" "<<n-1;

    //}
return 0;
}
