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
    int n, k;
    cin >> n >> k;
    int a[2 * n];
    map<int, int> l;
    map<int, int> r;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
        if (i < n)
            l[a[i]]++;
        else
        {
            r[a[i]]++;
        }
    }
    vi two;
    vi side1;
    vi side2;
    for (int i = 1; i <= n; i++)
    {
        if (l[i] == 1 && r[i] == 1)
        {
            two.pb(i);
        }
        else
        {
            if (l[i] == 2)
                side1.pb(i);
            else
                side2.pb(i);
        }
    }
    int curr = 0;
    vi A, B;
    int mini = min(SZ(side1), SZ(side2));
    if (mini >= k)
    {
        for (int i = 0; i < k; i++)
        {
            A.pb(side1[i]);
            A.pb(side1[i]);
        }
        for (int i = 0; i < k; i++)
        {
            B.pb(side2[i]);
            B.pb(side2[i]);
        }
    }
    else
    {
        for (int i = 0; i < mini; i++)
        {
            A.pb(side1[i]);
            A.pb(side1[i]);
        }
        for (int i = 0; i < mini; i++)
        {
            B.pb(side2[i]);
            B.pb(side2[i]);
        }
        k -= mini;
        for (int i = 0; i < k * 2; i++)
        {
            A.pb(two[i]);
            B.pb(two[i]);
        }
    }
    for (auto i : A)
        cout << i << " ";

    cout << '\n';
    for (auto i : B)
        cout << i << " ";

    cout << '\n';
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