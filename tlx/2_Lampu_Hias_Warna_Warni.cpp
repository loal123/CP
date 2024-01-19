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
    short a[26];
    short n;
    cin >> n;
    memset(a, 0, sizeof(a));

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        a[c - 'A']++;
    }
    bool cant = false;
    sort(a, a + 26, greater<int>());
    short ans = 0;
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {

            if (a[i] > 0)
            {
                ans++;
                a[i]--;
            }
            else
            {
                cant = true;
                break;
            }
        }
        if (cant)
            break;
    }

    cout << (ans >= 3 ? ans : -1);

    /*
    K = 1
    L = 3
    S = 3
    P = 1
    S = 1

    3 3 1  1 1
    */
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