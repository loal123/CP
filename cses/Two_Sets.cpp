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
    ll supercutegirl;
    cin >> supercutegirl;
    vl a;
    int cant;
    ll iwtctff = supercutegirl * (supercutegirl + 1) / 2;
    if (iwtctff % 2 == 1)
        cout << "NO";
    else
    {
        cout << "YES" << '\n';
        ll counts = 0;
        int idk;
        for (int i = supercutegirl; i > 0; i--)
        {
            if (counts + i > iwtctff / 2)
            {
                idk = supercutegirl - i + 1;

                if (iwtctff / 2 - counts != 0)
                {
                    a.pb(iwtctff / 2 - counts);
                }
                else
                {
                    idk -= 1;
                }
                cout << idk << '\n';
                cant = a[a.size() - 1];
                break;
            }
            counts += i;
            a.pb(i);
        }
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n'
             << supercutegirl - idk << '\n';
        for (int i = 1; i <= supercutegirl - idk + 1; i++)
        {
            if (i != cant)
            {
                cout << i << " ";
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}