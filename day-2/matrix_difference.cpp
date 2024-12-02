#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
      int n;
    cin>>n;
    int vl = n*n;
    int mat [100][100];
    int cnt=0;
    int cnt1 = n*n;
    for(int i=0;i<n;i++){
       if(i%2==0){
          for(int j=0;j<n;j++){
            if(j%2==0){
              cnt++;
              mat[i][j]=cnt;
            }
          }
          for(int j=0;j<n;j++){
            if(j%2==1){
              
              mat[i][j]=cnt1--;
            }
          }
       }
       if(i%2==1){
          for(int j=n-1;j>=0;j--){
            if(j%2==1){
              cnt++;
              mat[i][j]=cnt;
            }
          }
          for(int j=n-1;j>=0;j--){
            if(j%2==0){
              
              mat[i][j]=cnt1--;
            }
          }
       }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
       
    }
   }
    return 0;
}