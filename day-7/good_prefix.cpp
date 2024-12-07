#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
    vector<ll>v(n) ;
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll mx=-1e9;
    ll ans=0;
    ll sum=0;
     for(int i=0;i<n;i++){
        sum+=v[i];
        mx=max(mx,v[i]);
        if(sum-mx==mx) ans++;
    }
    cout<<ans<<endl;
    }
    return 0;
}