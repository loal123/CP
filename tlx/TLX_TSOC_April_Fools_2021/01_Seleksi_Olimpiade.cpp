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
    int n, m;
    cin >> n >> m;
    set<string> s;
    string x;
    cin >> x;
    map<int, vi> M;
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        string S;
        cin >> S;
        s.insert(S);
        vs.pb(S);
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            M[j].pb(x);
        }
    }
    int curr = n;
    for (int i = 2; i >= 0; i--)
    {
        int yeah = *max_element(all(M[i]));
        for (auto i : s)
        {
        }
    }
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