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
const int maxn = 1e5;
ll a[maxn];
int binarysearch(int x, int size)
{
    int x = 0, y = size - 1;
    while (x != y)
    {
        int mid = (x + y) / 2;
        if (a[mid] >= x)
        {
        }
    }
}

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    ll b[n];
    ll pref[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        pref[i] = counts;
        cin >> b[i];
        counts += b[i];
    }
    pref[n] = counts;

    ll maxi = -1;
    int left, right;
    int leftpos, rightpos;
    left = x - k;
    right = x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= left)
        {
            leftpos = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i++)
    {
        if (a[i] <= right)
        {
            rightpos = i;
        }
    }
    maxi = max(pref[rightpos + 1] - pref[leftpos], maxi);

    while (a[leftpos] <= x)
    {

        if (rightpos < n - 1)
        {
            int idk = a[rightpos + 1] - a[rightpos];
            
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