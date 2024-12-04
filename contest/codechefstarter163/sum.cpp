#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        vector<pair<ll, ll>> v;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, 0});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        ll cnt = 0;
        bool isTrue = false;
        for (auto v1 : v)
        {
            ll value = v1.first;
            ll count = v1.second;
            ans += value * count;
            cnt++;

            if (ans >= m)
            {
                isTrue = true;
                break;
            }
        }
        if (isTrue)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
