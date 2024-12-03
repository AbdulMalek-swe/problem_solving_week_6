#include <bits/stdc++.h>
using namespace std;

int main() 
{
      int t;
      cin >> t;
      while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int min = a[1],index=n+1; 
        vector<int>arr ;
        arr.push_back(min);
        for (int i = 2; i <= n; i++) {
            if (a[i] >= min) {
                min = a[i];
                arr.push_back(min);
            }
            else{
                index = i;
                break;
            }
        }
        vector<int> b;
        for (int i = index; i <= n; i++) {
            b.push_back(a[i]);
        }
        for(int i=0;i<arr.size();i++){
            b.push_back(arr[i]);
        }
        if(is_sorted(b.begin(), b.end())){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }

      }
    return 0;
}