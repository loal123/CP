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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int supergirl[n];
    for (int i = 0; i < n; i++)
    {
        cin >> supergirl[i];
    }
    vi a;
    vi b;
    vi c;
    sort(supergirl, supergirl + n);
    for (int i = 0; i < n; i++)
    {
        if (supergirl[i] < 0)
            a.pb(supergirl[i]);

        else if (supergirl[i] > 0)
            b.pb(supergirl[i]);
        else if (supergirl[i] == 0)
            c.pb(supergirl[i]);
    }
    if (b.size() == 0)
    {
        int t = 2;
        while (t--)
        {
            b.pb(a[a.size() - 1]);
            a.pop_back();
        }
    }
    if (
        a.size() > 0 && a.size() % 2 == 0)
    {
        c.pb(a[a.size() - 1]);
        a.pop_back();
    }
    cout << a.size() << " ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << b.size() << " ";
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << c.size() << " ";
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}