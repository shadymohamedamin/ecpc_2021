#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define shady ios_base::sync_with_stdio(false);cin.tie(NULL);
const int mod=1e9+7;
int main()
{
     //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    shady
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<((n%mod)*(n%mod))%mod<<" "<<((n%mod)*((n-1)%mod))%mod<<"\n";
    }
return 0;
}
