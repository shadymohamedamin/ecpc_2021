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
    int a,b;
    cin>>a>>b;
    cout<<abs(a-b)+1;
return 0;
}
