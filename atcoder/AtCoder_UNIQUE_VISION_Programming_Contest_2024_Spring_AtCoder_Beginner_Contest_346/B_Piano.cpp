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
    int w, b;
    cin >> w >> b;
    string piano = "wbwbwwbwbwbw";
    string xd = "";
    for (int i = 0; i < 100; i++)
    {
        xd += piano;
    }

    for (int j = 0; j <= 20; j++)
    {
        int wc = 0, bc = 0;
        int curr = 0;
        for (int i = j; i < SZ(xd); i++)
        {

            if (xd[i] == 'w')
                wc++;
            else
                bc++;
            if (wc == w && b == bc)
            {
                cout << "Yes\n";
                return;
            }
            curr++;
        }
    }
    cout << "No\n";
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