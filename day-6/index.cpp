 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int t;
    cin>>t;
    while(t--){
         ll n;
          cin>>n;
          vector<ll> v(n+1);
          for(ll i=0;i<n;i++){
              cin>>v[i];
          }
          reverse(v.begin(),v.end());
        while(!v.empty()&& v.back()==0) v.pop_back();
        if(v.empty()){
            cout<<0<<endl;
            continue;
        } 
        reverse(v.begin(),v.end());
        
 ll ans = 0;
        for(ll i=0;i<v.size()-2;i++){
      
             if(v[i]==0){
                ans++;
             }else{
                ans+=v[i];
             }
        }
        cout<<ans<<endl;
   

    }
}
    