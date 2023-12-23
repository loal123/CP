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
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    vector<pii> v;
    ll counts1 = 0;
    ll counts2 = 0;
    string lazy = "";
    bool rn = false;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (abs(counts1 + a - counts2) <= 500)
        {
            counts1 += a;
            lazy += 'A';
        }
        else
        {
            counts2 += b;
            lazy += 'G';
        }
    }

    cout << (abs(counts1 - counts2) <= 500 ? lazy : "-1");
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