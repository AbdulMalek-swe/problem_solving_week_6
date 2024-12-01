#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      string str;
      cin>>n>>str;
      n = str.size();
      int flag = 0;
      for(int i=0;i<n/2;i++){
        if(str[i]==str[n-1-i]) continue;
        else if(str[i]>str[n-i-1]){
          flag=1;
        }else {
          break;
        }
      }
      string rev = str;
      reverse(str.begin(),str.end());
      if(flag==0){
        cout<<rev<<endl;
      }else {
        cout<<str<<rev<<endl;
      }
    }
    return 0;
}