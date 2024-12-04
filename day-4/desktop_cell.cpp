#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
     int x,y;
     cin>>x>>y;
     int sum;
     if(y%2==1){
       sum=y/2;
       sum+=1;
     }else {
       sum = y/2;
     } 
    // int totalCell =  ;
     int exitCell = (15*sum)- (y*4); 
     while(exitCell<x){
       sum++;
       exitCell+=15;
     }
     cout<<sum<<endl;
     
   }
    return 0;
}