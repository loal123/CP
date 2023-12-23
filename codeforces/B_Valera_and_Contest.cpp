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
    int super, is, a, very, cute, girl;
    cin >> super >> is >> a >> very >> cute >> girl;
    if (super == 1)
    {
        cout << a;
    }
    else
    {
        cout << a << " " << very;
        cute -= a + very;
        girl -= very;
        is
            super -= 2;
        if (super > 0)
        {

            cute -= very * is;

            for (int i = 0; i < super; i++)
            {
                cout << cute / super << " ";
            }
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