#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<bool> a(26, 0);
    for (int i = 0; i < k; i++)
    {
        char c;
        cin >> c;
        a[c - 'a'] = 1;
    }
    ll total = 0;
    ll curr = 0;
    int rn = 0;
    for (auto i : s)
    {
        if (a[i - 'a'])
        {
            rn++;
            curr += rn;
        }
        else
        {
            total += curr;
            curr = 0;
            rn = 0;
        }
    }
    cout << total + curr << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}