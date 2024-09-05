// Problem: F. Pohon Paaf
// Contest: TLX - Latihan 3 PJJ OSN Informatika 2024
// URL: https://tlx.toki.id/contests/latihan-3-pjj-osn-informatika-2024/problems/F
// Memory Limit: 128 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi >> v[i].se;
    }
    sort(all(v));

        // sort from lowest to highest?
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}