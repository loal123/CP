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
vi v;
void ilovekoishisomuch(string s)
{
    if (s.size() == 10)
        return;
    if (s.size() != 0)
        v.pb(stoi(s));
    ilovekoishisomuch(s + '4');
    ilovekoishisomuch(s + '7');
}
void solve()
{
    string s = "";
    int n;
    cin >> n;
    ilovekoishisomuch(s);

    sort all(v);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            cout << i + 1;
            break;
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