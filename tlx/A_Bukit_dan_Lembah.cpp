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
    int maxi = -1;
    int mini = 1e9 + 5;
    int rn;
    cin >> rn;
    int point = rn;
    bool up = false;
    int wow = true;

    while (1)
    {
        int a;
        cin >> a;
        if (cin.eof())
            break;
        maxi = max(maxi, a);
        mini = min(mini, a);
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