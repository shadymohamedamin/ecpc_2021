#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define shady ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
     //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    shady
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
return 0;
}
