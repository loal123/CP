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
set<pii> s;
map<pii, int> m;
int a(int l, int r)
{
    cout << "? " << l << ' ' << r << endl;
    int x;
    cin >> x;
    return x;
}
void solve()
{
    int n, t;
    cin >> n >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int passed = 0;
        int l = 1, r = n;
        int prev;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            if (s.count({l, mid}) == 0)
            {
                prev = a(l, mid);
                m[{l, mid}] = prev;
                s.insert({l, mid});
            }
            else
            {
                prev = m[{l, mid}];
            }

            int curr = mid - l + 1 - prev;
            if (curr + passed < k)
            {
                l = mid + 1;
                passed += curr;
            }
            else
            {
                r = mid;
            }
        }
        if (prev == 0 && l != r)
        {
            if (passed + 1 == k)
                cout << "! " << l << endl;
            else
                cout << "! " << r << endl;

            return;
        }
        if (a(l, l) == 1)
            cout << "! " << r << endl;
        else
            cout << "! " << l << endl;
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