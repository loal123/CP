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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        string idk = s.substr(a - 1, b - a + 1);
        int counts = 0;
        for (int i = 0; i < b - a; i++)
        {
            if (idk[i] == idk[i + 1])
                counts++;
        }
        cout << counts << endl;
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