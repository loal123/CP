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
const int maxn = 1e5 + 5;
int sizes[maxn];
int parent[maxn];
int find_set(int x)
{
    if (x == parent[x])
        return x;
    return parent[x] = find_set(parent[x]);
}
void merge_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sizes[b] > sizes[a])
            swap(a, b);
        sizes[a] += sizes[b];
        parent[b] = a;
    }
}
int sta[maxn];
map<ll, ll> pos;
int vs[maxn];
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    set<int> A, B, has;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sizes[i] = 1;
        parent[i] = i;
        has.insert(v[i]);
        pos[v[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (has.count(a - v[i]))
        {
            parent[find_set(pos[a - v[i]])] = find_set(i);
            vs[i] |= 1;
        }
        if (has.count(b - v[i]))
        {
            parent[find_set(pos[b - v[i]])] = find_set(i);
            vs[i] |= 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sta[i] = 3;
    }
    for (int i = 0; i < n; i++)
    {
        sta[find_set(i)] &= vs[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sta[i] == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        int xd = sta[find_set(i)];
        cout << ((xd & 1) == 0) << " ";
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