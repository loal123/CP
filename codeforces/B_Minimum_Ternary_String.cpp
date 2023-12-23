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
    string s;
    cin >> s;
    string h = s;
    int n = s.size();
    int counts = 0;
    string bruh = "";
    int meh = 0;
    ;
    while (meh < s.size())

    {
        if (s[meh] == '1')
        {
            bruh += '1';
            s.erase(meh, 1);
            meh--;
        }
        meh++;
    }
    bool yeah = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '2')
        {
            s.insert(i, bruh);
            yeah = true;
            break;
        }
    }
    if (!yeah)
    {
        s += bruh;
    }
    for (auto i : s)
        cout << i;
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