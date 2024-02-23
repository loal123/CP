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
const int maxn = 1e5 + 5;
int parent[maxn];
int sizes[maxn];
int maxi = 1;
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
void dsu(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[a] < sizes[b])
            swap(a, b);
        parent[b] = a;

        sizes[a] += sizes[b];
        maxi = max(maxi, sizes[a]);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int curr = n;

    for (int i = 0; i < n; i++)
    {
        make_set(i);
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if (find_set(a) != find_set(b))
        {
            curr--;
            dsu(a, b);
        }
        cout << curr << ' ' << maxi << '\n';
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