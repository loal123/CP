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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    vi v;
    int counts = 1;
    int n, k;
    cin >> n >> k;
    int abo, aba, aco, aca, bco, bca;
    cout << "or " << 1 << " " << 2 << endl;
    cin >> abo;
    cout << "and " << 1 << " " << 2 << endl;
    cin >> aba;
    cout << "or " << 1 << " " << 3 << endl;
    cin >> aco;
    cout << "and " << 1 << " " << 3 << endl;
    cin >> aca;
    cout << "or " << 2 << " " << 3 << endl;
    cin >> bco;
    cout << "and " << 2 << " " << 3 << endl;
    cin >> bca;
    int ab = aba + abo;
    int ac = aco + aca;
    int bc = bco + bca;
    v.pb((ab + ac - bc) / 2);
    v.pb(ab - v[0]);
    v.pb(ac - v[0]);
    n -= 3;
    while (1)
    {
        if (counts <= n)
        {
            int ORR;
            int ANDD;
            cout << "or " << 1 << " " << 3 + counts << endl;
            cin >> ORR;
            cout << "and " << 1 << " " << 3 + counts << endl;
            cin >> ANDD;
            v.pb(ORR + ANDD - v[0]);
        }
        else
        {
            break;
        }
        counts++;
    }
    sort all(v);
    cout << "finish " << v[k - 1] << endl;
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