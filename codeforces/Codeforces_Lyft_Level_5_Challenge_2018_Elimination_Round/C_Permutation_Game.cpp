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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);
    vi pos(n + 1);
    vi poss(n + 1);
    vector<bool> winning(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pos[i] = v[i];
        poss[v[i]] = i;
    }
    for (int i = n; i >= 1; i--)
    {
        int curr = poss[i];
        int diff = i;
        for (int j = curr + diff; j <= n; j += diff)
        {
            if (!winning[pos[j]] && pos[j] > i)
                winning[i] = 1;
        }
        for (int j = curr - diff; j >= 1; j -= diff)
        {
            if (!winning[pos[j]] && pos[j] > i)
                winning[i] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (winning[pos[i]])
            cout << 'A';
        else
            cout << 'B';
    }
    cout << '\n';
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