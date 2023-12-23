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
    int a[25] = {0};
    string s;
    cin >> s;
    for (auto i : s)
    {
        a[i - 'a']++;
    }
    int odd = 0;

    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
            odd++;
    }
    if (odd % 2 == 0)
        cout << "First";
    else
        cout << "Second";
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