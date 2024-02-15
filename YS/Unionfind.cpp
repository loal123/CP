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
const int maxn = 2e5 + 5;
int parent[maxn];
int sizes[maxn];
void make_set(int v)

{
    parent[v] = v;
    sizes[v] = 1;
}
int find_set(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[a] < sizes[b])
            swap(a, b);
        parent[b] = a;
        sizes[a] += sizes[b];
    }
}
// Super is the cutest girl
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }
    while (q--)
    {
        int d, x, y;
        cin >> d >> x >> y;
        if (d == 0)
        {
            union_sets(x, y);
        }
        else
        {
            cout << (find_set(x) == find_set(y)) << '\n';
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