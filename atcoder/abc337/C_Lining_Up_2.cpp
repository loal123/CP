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
    int a[n + 1];
    deque<int> d;
    map<int, int> m;
    int front;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
            front = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != -1)
            m[a[i]] = i;
    }
    int bruh = front;
    n--;
    cout << front << " ";
    while (n--)
    {
        cout << m[bruh] << " ";
        bruh = m[bruh];
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