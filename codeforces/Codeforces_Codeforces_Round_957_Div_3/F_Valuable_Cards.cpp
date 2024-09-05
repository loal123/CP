// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {
//     int n, x;
//     cin >> n >> x;
//     int ans = 1;
//     vi v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     map<int, bool> m;

// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            if (x % e == 0 && e > 1)
                v.push_back(e);
        }
        set<int> s;
        int ans = 0;
        for (auto e : v)
        {
            if (s.size() == 0)
            {
                s.insert(e);
                continue;
            }
            vector<int> vv;
            for (auto f : s)
            {
                if (x % (e * f) == 0)
                    vv.push_back(e * f);
            }
            for (auto f : vv)
                s.insert(f);
            s.insert(e);
            if (s.lower_bound(x) != s.end())
            {
                s.clear();
                s.insert(e);
                ans++;
            }
        }
        cout << ans + 1 << endl;
    }
}