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

    int n;
    cin >> n;
    int counts = 0;
    int idk[2005] = {0};
    int wao[1001] = {0};
    int waon[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        int a, b;

        cin >> a >> b;
        idk[a + b]++;
        if (a - b >= 0)
            wao[abs(a - b)]++;
        else
            waon[abs(a - b)]++;
    }
    for (int i = 0; i < 2005; i++)
    {
        counts += idk[i] * (idk[i] - 1) / 2;
    }
    for (int i = 0; i < 1001; i++)
    {
        counts += wao[i] * (wao[i] - 1) / 2;
        counts += waon[i] * (waon[i] - 1) / 2;
    }
    cout << counts;
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