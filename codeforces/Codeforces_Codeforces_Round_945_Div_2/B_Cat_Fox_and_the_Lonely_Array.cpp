// Problem: B. Cat, Fox and the Lonely Array
// Contest: Codeforces - Codeforces Round 945 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1973/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
    int n;
    cin >> n;
    vi v(n);
    int needed = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        needed |= v[i];
    }
    int k = 1;

    int prefixbit[n + 1][22];
    memset(prefixbit, 0, sizeof(prefixbit));
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 22; j++)
        {
            prefixbit[i + 1][j] += prefixbit[i][j];
            if ((1 << j) & v[i])
                prefixbit[i + 1][j]++;
        }
    }

    int curr = v[0];
    while (curr != needed)
    {
        curr |= v[k];
        k++;
    }
    int i = 0;
    for (int j = k; j <= n; j++)
    {
        int xd = 0;
        for (int b = 0; b < 22; b++)
        {
            if (prefixbit[j][b] - prefixbit[i][b])
                xd |= (1 << b);
        }
        if (xd == needed)
            i++;
        else
            k++;
    }
    cout << k << endl;

    // 1 0 1 0 0
    // 1 0 0 0 1
    // 0 0 0 1 0

    // 1 1 2 2 2
    // 1 1 1 1 2
    // 0 0 0 1 1
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}